/* Ghidra address: 018ea360 */
/* Ghidra symbol: FUN_018ea360 */


void FUN_018ea360(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  uint local_2c [3];
  
  local_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_005fbfa0(param_2,local_2c);
  FUN_00468530(&local_50,local_2c[0],0xfffffffffffffffc);
  uVar1 = *(undefined8 *)(param_1 + 8);
  pcVar2 = (code *)FUN_00411550(uVar1,0xffee);
  (*pcVar2)(uVar1,param_2,L"Integer",&local_50);
  FUN_00460ba0(&local_50);
  return;
}

