/* Ghidra address: 017f0df0 */
/* Ghidra symbol: FUN_017f0df0 */


void FUN_017f0df0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  cVar1 = FUN_01695e20(*(undefined8 *)(param_1 + 0xb48));
  if (cVar1 != '\0') {
    uVar2 = FUN_00b89270();
    FUN_00b8e520(uVar2,&local_10,999);
  }
  cVar1 = FUN_01695e60(*(undefined8 *)(param_1 + 0xb48));
  if (cVar1 != '\0') {
    uVar2 = FUN_00b89270();
    FUN_00b8e520(uVar2,&local_10,1000);
  }
  cVar1 = FUN_01695e40(*(undefined8 *)(param_1 + 0xb48));
  if (cVar1 != '\0') {
    uVar2 = FUN_00b89270();
    FUN_00b8e520(uVar2,&local_10,0x3e9);
  }
  FUN_00416ba0(local_20,&LAB_017f0f04,local_10);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x7d8),local_20[0]);
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  return;
}

