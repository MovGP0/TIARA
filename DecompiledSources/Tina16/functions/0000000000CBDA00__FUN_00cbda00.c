/* Ghidra address: 00cbda00 */
/* Ghidra symbol: FUN_00cbda00 */


void FUN_00cbda00(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 local_res10 [3];
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong *local_38;
  undefined8 local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_40 = auStack_68;
  local_30 = 0;
  local_res10[0] = param_2;
  FUN_0041b910(param_2);
  FUN_00cbde70(param_1);
  local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_38 = *(longlong **)(param_1 + 0x100);
  do {
    (**(code **)(*local_38 + 0x198))(local_38,&local_30,0x7fffffff,local_res10[0]);
    (**(code **)(*local_28 + 0x78))(local_28,local_30);
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x78))
                      (**(longlong **)(param_1 + 0x108),local_30);
  } while (cVar2 == '\0');
  (**(code **)(**(longlong **)(param_1 + 0x108) + 0x60))(*(longlong **)(param_1 + 0x108),local_28);
  plVar1 = local_28;
  local_20 = local_28;
  local_28 = (longlong *)0x0;
  FUN_00410f20(plVar1);
  FUN_00414480(&local_30);
  FUN_0041b800(local_res10);
  return;
}

