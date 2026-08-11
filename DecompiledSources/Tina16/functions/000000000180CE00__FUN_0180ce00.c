/* Ghidra address: 0180ce00 */
/* Ghidra symbol: FUN_0180ce00 */


undefined8 FUN_0180ce00(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = 0;
  cVar1 = FUN_0180cd80(param_1,param_2);
  if (cVar1 != '\0') {
    uVar2 = FUN_0180cf40(param_1,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_1 + 8));
    uVar3 = FUN_0180cf60(param_1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_1 + 0x18));
    uVar2 = FUN_0180cca0(&DAT_0180c3b0,1,uVar2,0,uVar3,0);
  }
  return uVar2;
}

