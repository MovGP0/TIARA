/* Ghidra address: 0197d670 */
/* Ghidra symbol: FUN_0197d670 */


void FUN_0197d670(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x30) != param_2) {
    lVar1 = FUN_0197d570(param_1);
    if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x50) != 0)) && (*(longlong *)(lVar1 + 0x60) != 0))
    {
      if (param_2 == 0) {
        (**(code **)(lVar1 + 0x60))
                  (*(undefined8 *)(lVar1 + 0x68),*(undefined8 *)(param_1 + 0x38),1,0);
      }
      else if (*(longlong *)(param_1 + 0x30) == 0) {
        (**(code **)(lVar1 + 0x50))
                  (*(undefined8 *)(lVar1 + 0x58),*(undefined8 *)(param_1 + 0x38),1,param_2);
        FUN_0197d750(param_1,1);
      }
      else {
        (**(code **)(lVar1 + 0x50))
                  (*(undefined8 *)(lVar1 + 0x58),*(undefined8 *)(param_1 + 0x38),0,param_2);
      }
    }
    *(longlong *)(param_1 + 0x30) = param_2;
  }
  return;
}

