/* Ghidra address: 00debe60 */
/* Ghidra symbol: FUN_00debe60 */


void FUN_00debe60(char *param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_016ee490(param_2,*param_1 + '\x01',1,0);
  FUN_016edfa0(param_2,param_3,uVar1,*(undefined8 *)(param_1 + 0x10),
               *(undefined8 *)(param_3 + 0x728));
  return;
}

