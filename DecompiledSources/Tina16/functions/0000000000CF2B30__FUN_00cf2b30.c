/* Ghidra address: 00cf2b30 */
/* Ghidra symbol: FUN_00cf2b30 */


void FUN_00cf2b30(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char local_28;
  byte local_27;
  byte local_26;
  byte local_25;
  byte local_24;
  byte local_23;
  byte local_22;
  char local_21;
  undefined8 local_20;
  
  uVar1 = *param_1;
  local_20._0_1_ = (char)uVar1;
  local_28 = (char)local_20;
  local_20._1_1_ = (byte)((ulonglong)uVar1 >> 8);
  local_27 = (char)local_20 << 7 | local_20._1_1_ >> 1;
  local_20._2_1_ = (byte)((ulonglong)uVar1 >> 0x10);
  local_26 = local_20._1_1_ << 6 | local_20._2_1_ >> 2;
  local_20._3_1_ = (byte)((ulonglong)uVar1 >> 0x18);
  local_25 = local_20._2_1_ << 5 | local_20._3_1_ >> 3;
  local_20._4_1_ = (byte)((ulonglong)uVar1 >> 0x20);
  local_24 = local_20._3_1_ << 4 | local_20._4_1_ >> 4;
  local_20._5_1_ = (byte)((ulonglong)uVar1 >> 0x28);
  local_23 = local_20._4_1_ * '\b' | local_20._5_1_ >> 5;
  local_20._6_1_ = (byte)((ulonglong)uVar1 >> 0x30);
  local_22 = local_20._5_1_ * '\x04' | local_20._6_1_ >> 6;
  local_21 = local_20._6_1_ * '\x02';
  local_20 = uVar1;
  (**(code **)PTR_DAT_02003048)(&local_28);
  (**(code **)PTR_DAT_02004ac0)(&local_28,param_2);
  return;
}

