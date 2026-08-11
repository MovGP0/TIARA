/* Ghidra address: 01d86330 */
/* Ghidra symbol: FUN_01d86330 */


undefined8 FUN_01d86330(longlong param_1,byte param_2,char param_3)

{
  longlong lVar1;
  uint uVar2;
  
  if ((*(longlong *)(param_1 + 0x58) != 0) &&
     ((lVar1 = *(longlong *)(param_1 + 0x58), param_2 == 0 || (param_2 == 1)))) {
    uVar2 = (**(code **)(**(longlong **)(lVar1 + 0x918) + 0x260))(*(longlong **)(lVar1 + 0x918));
    if (uVar2 != param_2) {
      (**(code **)(**(longlong **)(lVar1 + 0x918) + 0x268))
                (*(longlong **)(lVar1 + 0x918),(uint)param_2);
      FUN_01d811d0(lVar1,param_1);
    }
    if (param_3 == '\0') {
      FUN_01d81390(lVar1,param_1);
    }
    else if (param_3 == '\x01') {
      FUN_01d813b0(lVar1,param_1);
    }
    else if (param_3 == '\x02') {
      FUN_01d81370(lVar1,param_1);
    }
  }
  return 0;
}

