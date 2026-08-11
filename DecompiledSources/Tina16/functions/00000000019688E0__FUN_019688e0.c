/* Ghidra address: 019688e0 */
/* Ghidra symbol: FUN_019688e0 */


longlong * FUN_019688e0(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_28;
  longlong local_20;
  
  local_30 = auStack_58;
  local_28 = (longlong *)0x0;
  puVar1 = auStack_58;
  if (((*(char *)((longlong)param_1 + 0x1cc) == '\0') || (puVar1 = auStack_58, param_1[0x1e] == 0))
     || (cVar2 = (**(code **)(*param_1 + 0x200))(param_1,param_2,param_3), puVar1 = local_30,
        cVar2 == '\0')) {
    local_30 = puVar1;
    local_28 = (longlong *)FUN_01953c40(param_1,param_2,param_3,param_4);
  }
  else {
    if (param_4 == param_1) {
      return local_28;
    }
    local_20 = param_1[0x13];
    (**(code **)(*param_1 + 200))(param_1,0xc0c3880000000000);
    local_28 = (longlong *)
               (**(code **)(*(longlong *)param_1[0x1e] + 0x218))
                         ((longlong *)param_1[0x1e],param_2,param_3,param_4);
    (**(code **)(*param_1 + 200))(param_1,local_20);
    cVar2 = FUN_004113d0(local_28,&PTR_FUN_019342a8);
    if (((cVar2 != '\0') || (cVar2 = FUN_004113d0(local_28,&PTR_FUN_0192c3a0), cVar2 != '\0')) &&
       (param_4 == (longlong *)0x0)) {
      local_28 = param_1;
    }
  }
  if ((local_28 == param_1) && (cVar2 = FUN_01953ba0(param_1), cVar2 == '\0')) {
    local_28 = (longlong *)0x0;
  }
  return local_28;
}

