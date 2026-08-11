/* Ghidra address: 013b7990 */
/* Ghidra symbol: FUN_013b7990 */


void FUN_013b7990(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_9c8;
  undefined8 local_9c0;
  undefined8 local_9b8;
  undefined8 local_9b0;
  undefined8 local_9a8;
  undefined8 local_9a0;
  undefined8 local_998;
  undefined8 local_990 [2];
  undefined8 local_980;
  longlong *local_978;
  longlong *local_970;
  longlong *local_968;
  undefined8 local_960 [288];
  longlong local_5d;
  
  local_9c8 = 0;
  local_9c0 = 0;
  local_9b0 = 0;
  local_9b8 = 0;
  local_9a8 = 0;
  local_998 = 0;
  local_9a0 = 0;
  local_990[0] = 0;
  local_968 = (longlong *)0x0;
  local_970 = (longlong *)0x0;
  local_978 = (longlong *)0x0;
  local_980 = 0;
  puVar2 = local_960;
  for (lVar1 = 0x127; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_004179d0(local_960,&DAT_01d0d0b8);
  FUN_00414480(param_2);
  FUN_00414480(param_3);
  FUN_00414480(param_4);
  if (local_5d != 0) {
    FUN_00bac3d0(&local_968);
    (**(code **)(*local_968 + 400))(local_968,local_5d);
    (**(code **)(*local_968 + 0x100))(local_968,&local_970);
    (**(code **)(*local_970 + 0xd8))(local_970,local_990,L"welcome");
    FUN_0041b890(&local_978,local_990[0],&DAT_013b7d54);
    if (local_978 != (longlong *)0x0) {
      (**(code **)(*local_978 + 0xb8))(local_978,&local_9a0);
      FUN_0043ea00(&local_998,local_9a0);
      FUN_00414ad0(param_2,local_998);
    }
    (**(code **)(*local_970 + 0xd8))(local_970,&local_9a8,L"instructions");
    FUN_0041b890(&local_978,local_9a8,&DAT_013b7d54);
    if (local_978 != (longlong *)0x0) {
      (**(code **)(*local_978 + 0xb8))(local_978,&local_9b8);
      FUN_0043ea00(&local_9b0,local_9b8);
      FUN_00414ad0(param_3,local_9b0);
    }
    (**(code **)(*local_970 + 0xd8))(local_970,&local_9c0,L"options");
    FUN_0041b890(&local_978,local_9c0,&DAT_013b7d54);
    if (local_978 != (longlong *)0x0) {
      (**(code **)(*local_978 + 0x100))(local_978,&local_9c8,L"model");
      FUN_00414ad0(param_4,local_9c8);
    }
  }
  FUN_00414480(&local_9c8);
  FUN_0041b800(&local_9c0);
  FUN_00414560(&local_9b8,2);
  FUN_0041b800(&local_9a8);
  FUN_00414560(&local_9a0,2);
  FUN_0041b800(local_990);
  FUN_00414480(&local_980);
  FUN_00417840(&local_978,&LAB_00b9fca0,2);
  FUN_0041b800(&local_968);
  FUN_00417740(local_960,&DAT_01d0d0b8);
  return;
}

