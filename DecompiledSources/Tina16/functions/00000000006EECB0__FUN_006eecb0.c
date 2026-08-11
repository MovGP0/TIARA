/* Ghidra address: 006eecb0 */
/* Ghidra symbol: FUN_006eecb0 */


void FUN_006eecb0(longlong param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  FUN_00411a80(param_1,param_2);
  *(undefined1 *)(param_1 + 0x38) = 1;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
  if (*(longlong *)(lVar3 + 0x550) == param_1) {
    *(undefined8 *)(lVar3 + 0x550) = 0;
  }
  lVar3 = FUN_006eed60(param_1);
  if (*(char *)(lVar3 + 0x798) == '\0') {
    uVar4 = FUN_006eed60(param_1);
    cVar1 = FUN_0065be20(uVar4);
    if (cVar1 != '\0') {
      uVar4 = FUN_006eeda0(param_1);
      iVar2 = FUN_006ef6e0(param_1);
      thunk_FUN_041b2403(uVar4,0x1008,(longlong)iVar2,0);
    }
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x10));
  FUN_004b1010(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

