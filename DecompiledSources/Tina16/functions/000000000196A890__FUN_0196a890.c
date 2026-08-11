/* Ghidra address: 0196a890 */
/* Ghidra symbol: FUN_0196a890 */


void FUN_0196a890(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x118))(param_1);
  if (lVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 0x118))(param_1);
    FUN_01973030(uVar2,param_2,param_1[0x32],1);
  }
  return;
}

