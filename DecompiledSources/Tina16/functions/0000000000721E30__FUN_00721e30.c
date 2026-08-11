/* Ghidra address: 00721e30 */
/* Ghidra symbol: FUN_00721e30 */


undefined8 FUN_00721e30(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_2 == 0x110) {
    FUN_00721d20(param_1);
    *(undefined8 *)(DAT_01e050f0 + 0x80) = param_1;
    uVar1 = thunk_FUN_03c9d277(param_1,0xfffffffc,*(undefined8 *)(DAT_01e050f0 + 0xc0));
    *(undefined8 *)(DAT_01e050f0 + 0xb8) = uVar1;
    thunk_FUN_03a65bf1(*(undefined8 *)(DAT_01e050f0 + 0xc0),param_1,0x110,param_3,param_4);
    DAT_01e050f0 = 0;
  }
  return 0;
}

