/* Ghidra address: 01cc76a0 */
/* Ghidra symbol: FUN_01cc76a0 */


void FUN_01cc76a0(longlong *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1[0xb];
  *param_2 = *(undefined4 *)(lVar1 + 0x2c);
  uVar2 = (**(code **)(*param_1 + 0x58))(param_1,lVar1);
  *param_3 = uVar2;
  uVar2 = (**(code **)(*param_1 + 0x60))(param_1,param_1[0xb]);
  *param_4 = uVar2;
  *param_5 = 0;
  return;
}

