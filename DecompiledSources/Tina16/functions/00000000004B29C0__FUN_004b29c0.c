/* Ghidra address: 004b29c0 */
/* Ghidra symbol: FUN_004b29c0 */


void FUN_004b29c0(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 8) != 0) {
    cVar2 = FUN_0045aee0(*(longlong *)(param_1 + 8));
    if (cVar2 == '\0') {
      uVar1 = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(param_1 + 8) = 0;
      FUN_00410f20(uVar1);
    }
  }
  cVar2 = FUN_0045aee0(*(undefined8 *)(param_1 + 0x10));
  if (cVar2 == '\0') {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    FUN_00410f20(uVar1);
  }
  FUN_004b4bc0(param_1,0);
  FUN_004b1010(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

