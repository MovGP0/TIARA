/* Ghidra address: 013ac520 */
/* Ghidra symbol: FUN_013ac520 */


void FUN_013ac520(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_30 [2];
  longlong local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6c8),local_30);
  FUN_0043ea00(local_20,local_30[0]);
  if (local_20[0] != 0) {
    iVar3 = FUN_013ac660(param_1,local_20[0],*(undefined8 *)(*(longlong *)(param_1 + 0x6b8) + 0x550)
                         ,param_2,0);
    if (iVar3 == -1) {
      iVar3 = 0;
    }
    if (iVar3 != -1) {
      *(int *)(param_1 + 0x6d4) = iVar3 + 1;
      lVar1 = *(longlong *)(param_1 + 0x6b8);
      uVar4 = FUN_006df500(*(undefined8 *)(lVar1 + 0x550),iVar3);
      FUN_006e2590(lVar1,uVar4);
      uVar4 = FUN_006e2530(*(undefined8 *)(param_1 + 0x6b8));
      cVar2 = FUN_006ddf60(uVar4);
      if (cVar2 == '\0') {
        uVar4 = FUN_006e2530(*(undefined8 *)(param_1 + 0x6b8));
        uVar4 = FUN_013ab2c0(uVar4);
        FUN_006dd070(uVar4,1);
      }
    }
  }
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return;
}

