/* Ghidra address: 00658f00 */
/* Ghidra symbol: FUN_00658f00 */


void FUN_00658f00(longlong param_1,undefined8 param_2,uint param_3,int param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_0064fca0(param_1,0xb038,param_2,param_3 & 0xffff | param_4 << 0x10);
  if ((-1 < lVar1) && (*(longlong *)(param_1 + 0x398) != 0)) {
    (**(code **)(param_1 + 0x398))(*(undefined8 *)(param_1 + 0x3a0),param_1,param_2,param_3,param_4)
    ;
  }
  return;
}

