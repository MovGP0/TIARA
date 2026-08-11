/* Ghidra address: 01873100 */
/* Ghidra symbol: FUN_01873100 */


undefined4 FUN_01873100(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  uVar1 = 0;
  lVar2 = FUN_01872f50(param_1,*param_2);
  if (lVar2 != 0) {
    uVar1 = (*(code *)**(undefined8 **)(lVar2 + 0x10))
                      (*(undefined8 **)(lVar2 + 0x10),param_2,param_3,*(undefined8 *)(lVar2 + 0x18))
    ;
  }
  return uVar1;
}

