/* Ghidra address: 00c54870 */
/* Ghidra symbol: FUN_00c54870 */


void FUN_00c54870(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_3;
  uStack_30 = param_3[1];
  (**(code **)(*param_1 + 0x88))
            (param_1,param_2,&local_38,PTR_DAT_02004010[0x816],PTR_DAT_02004010[0x814],
             *PTR_DAT_020037e8,PTR_DAT_02004010[0x815],*PTR_DAT_02005310);
  return;
}

