/* Ghidra address: 00deace0 */
/* Ghidra symbol: FUN_00deace0 */


void FUN_00deace0(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_016ee690(param_2,*param_1,0);
  uVar2 = FUN_016ee690(param_2,param_1[1],0);
  FUN_016eded0(param_2,param_3,uVar1,uVar2,*(undefined8 *)(param_1 + 0x10),0xbff0000000000000);
  return;
}

