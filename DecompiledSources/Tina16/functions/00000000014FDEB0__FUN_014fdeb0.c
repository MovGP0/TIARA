/* Ghidra address: 014fdeb0 */
/* Ghidra symbol: FUN_014fdeb0 */


void FUN_014fdeb0(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  FUN_014fd660(param_1);
  if (*(char *)(param_1 + 0x741) == '\0') {
    FUN_01cc6030(*(undefined8 *)PTR_DAT_02001440);
  }
  DAT_0210ec08 = 0;
  uVar1 = FUN_019a45d0();
  FUN_0199ddf0(uVar1);
  uVar1 = FUN_019a4600();
  FUN_019af4b0(uVar1);
  FUN_0064e770(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0xa10));
  FUN_007fc890(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

