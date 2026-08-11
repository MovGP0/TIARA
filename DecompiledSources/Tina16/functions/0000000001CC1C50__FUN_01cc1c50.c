/* Ghidra address: 01cc1c50 */
/* Ghidra symbol: FUN_01cc1c50 */


void FUN_01cc1c50(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  int local_3c [3];
  
  FUN_01cc08f0(param_1,param_2);
  iVar1 = FUN_01d31a40(param_2);
  if (iVar1 == 0) {
    FUN_01d311c0(param_2,param_1 + 0x40,4);
    FUN_01d313e0(param_2,*(undefined8 *)(param_1 + 0x48));
    FUN_01d311c0(param_2,param_1 + 0x50,1);
    local_3c[0] = FUN_01cc1840(param_1);
    FUN_01d311c0(param_2,local_3c,4);
    iVar3 = 0;
    iVar1 = local_3c[0];
    if (-1 < local_3c[0] + -1) {
      do {
        plVar2 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),iVar3);
        (**(code **)(*plVar2 + 0x38))(plVar2,param_2);
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}

