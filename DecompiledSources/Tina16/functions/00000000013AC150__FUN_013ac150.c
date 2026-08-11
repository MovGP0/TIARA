/* Ghidra address: 013ac150 */
/* Ghidra symbol: FUN_013ac150 */


void FUN_013ac150(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  iVar1 = FUN_006decb0();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0x6b8) + 0x550),iVar4);
      if (*(longlong **)(lVar2 + 0x18) == param_2) {
        uVar3 = FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0x6b8) + 0x550),iVar4);
        (**(code **)(*param_2 + 0x288))(param_2,&local_28);
        FUN_013ab210(&local_20,local_28);
        FUN_006dc8a0(uVar3,local_20);
        FUN_006e1e60(*(undefined8 *)(param_1 + 0x6b8),FUN_013ab2f0,0,1);
        break;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414560(&local_28,2);
  return;
}

