/* Ghidra address: 01087780 */
/* Ghidra symbol: FUN_01087780 */


void FUN_01087780(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  iVar4 = 0;
  while (*(char *)(param_1 + 0x4c36) == '\0') {
    cVar1 = FUN_010874a0(param_1);
    if (cVar1 != '\0') break;
    cVar1 = FUN_010861d0(param_1,*(undefined4 *)(param_1 + 0x4c88),*(undefined8 *)(param_1 + 0x4cb0)
                        );
    if ((cVar1 != '\0') || (999 < iVar4)) break;
    FUN_01087620(param_1);
    uVar2 = FUN_01085d30(param_1);
    *(undefined4 *)(param_1 + 0x4c88) = uVar2;
    iVar4 = iVar4 + 1;
    cVar1 = FUN_00f81d20(*(undefined4 *)(param_1 + 0xad8));
    if (cVar1 != '\0') {
      uVar3 = FUN_0065b870(*(undefined8 *)PTR_DAT_020019c8);
      thunk_FUN_041b2403(uVar3,0x123d,0,0);
      FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    }
  }
  uVar2 = FUN_01085d30(param_1);
  *(undefined4 *)(param_1 + 0x4c88) = uVar2;
  uVar2 = FUN_01085d60(param_1,uVar2,param_1 + 0x4cb0,0);
  *(undefined4 *)(param_1 + 0x4c94) = uVar2;
  FUN_01087460();
  FUN_00414480(local_20);
  return;
}

