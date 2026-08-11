/* Ghidra address: 01412d60 */
/* Ghidra symbol: FUN_01412d60 */


undefined4 FUN_01412d60(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  uVar1 = thunk_FUN_03a65bf1(*(undefined8 *)(DAT_021084f0 + 0x768),param_1,param_2,param_3,param_4);
  if (param_2 == 0xf) {
    FUN_010a7d40(*(undefined8 *)(DAT_021084f0 + 0x6f0),*(undefined4 *)(DAT_021084f0 + 0x748),2);
  }
  return uVar1;
}

