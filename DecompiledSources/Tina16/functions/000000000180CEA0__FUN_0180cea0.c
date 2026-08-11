/* Ghidra address: 0180cea0 */
/* Ghidra symbol: FUN_0180cea0 */


undefined8 FUN_0180cea0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = 0;
  cVar1 = FUN_0180cdc0(param_1,param_2);
  if (cVar1 != '\0') {
    uVar2 = FUN_0180cf40(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_1 + 0x10));
    uVar3 = FUN_0180cf60(param_1,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_1 + 0x20));
    uVar2 = FUN_0180cca0(&DAT_0180c3b0,1,0,uVar2,0,uVar3);
  }
  return uVar2;
}

