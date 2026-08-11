/* Ghidra address: 00dd87c0 */
/* Ghidra symbol: FUN_00dd87c0 */


undefined8 FUN_00dd87c0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_2 + 0x30) == 0) {
    lVar1 = FUN_00dd96d0(&PTR_FUN_00dd8080,1,param_2);
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = lVar1 + 0x48;
    }
    FUN_0041b840(param_2 + 0x30,lVar1);
  }
  FUN_0041b890(param_1,*(undefined8 *)(param_2 + 0x30),&DAT_00dd8818);
  return param_1;
}

