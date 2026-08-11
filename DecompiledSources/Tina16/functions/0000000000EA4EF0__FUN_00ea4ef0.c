/* Ghidra address: 00ea4ef0 */
/* Ghidra symbol: FUN_00ea4ef0 */


void FUN_00ea4ef0(longlong param_1,longlong *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  if (param_2 == (longlong *)0x0) {
    uVar4 = FUN_0044d710(&PTR_FUN_00ea2d28,1,PTR_PTR_02004cd0);
    FUN_004134c0(uVar4);
  }
  if (param_3 != 1) {
    cVar1 = FUN_00ea4860(param_1);
    if (cVar1 != '\0') {
      iVar3 = 0;
      iVar5 = 1;
      do {
        iVar2 = FUN_00ea4640(param_1,0);
        FUN_00416dc0(&local_28,*(undefined8 *)(param_1 + 0x20),iVar3 + 1,iVar2 - iVar3);
        (**(code **)(*param_2 + 0x78))(param_2);
        iVar5 = iVar5 + 1;
        iVar3 = FUN_00ea4640(param_1);
        iVar2 = FUN_00ea4580(param_1);
        iVar3 = iVar3 + iVar2;
        if ((1 < param_3) && (param_3 <= iVar5)) break;
        cVar1 = FUN_00ea4940(param_1);
      } while (cVar1 != '\0');
      iVar5 = 0;
      if (*(longlong *)(param_1 + 0x20) != 0) {
        iVar5 = *(int *)(*(longlong *)(param_1 + 0x20) + -4);
      }
      FUN_00416dc0(&local_30,*(undefined8 *)(param_1 + 0x20),iVar3 + 1,iVar5 - iVar3);
      (**(code **)(*param_2 + 0x78))(param_2,local_30);
      goto code_r0x00ea503f;
    }
  }
  FUN_00ea47c0(param_1,&local_20);
  (**(code **)(*param_2 + 0x78))(param_2,local_20);
code_r0x00ea503f:
  FUN_00414560(&local_30,3);
  return;
}

