/* Ghidra address: 01ccba00 */
/* Ghidra symbol: FUN_01ccba00 */


undefined4 FUN_01ccba00(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_01ccb9c0(param_1,param_2,param_3,0);
  uVar2 = FUN_00c44470(*param_3,0xc059000000000000);
  *param_3 = uVar2;
  return uVar1;
}

