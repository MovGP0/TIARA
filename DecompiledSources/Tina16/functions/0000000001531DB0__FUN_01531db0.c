/* Ghidra address: 01531db0 */
/* Ghidra symbol: FUN_01531db0 */


void FUN_01531db0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_38 = 0;
  cVar1 = FUN_0152fa50(param_1,param_2);
  if (cVar1 != '\0') {
    FUN_00c0fae0(*(undefined8 *)(param_1 + 0x958));
    FUN_00c0dad0(*(undefined8 *)(param_1 + 0x958),0);
    *(undefined1 *)(param_1 + 0x1c49) = 1;
    FUN_00414ad0(param_1 + 0x968,L"noname.cir");
    FUN_00441920(&local_38,*(undefined8 *)(param_1 + 0x968));
    local_30 = local_38;
    local_28 = 0x11;
    FUN_00442f70(local_20,*(undefined8 *)(param_1 + 0x970),&local_30,0);
    FUN_0064de00(param_1,local_20[0]);
    FUN_019953b0(*(undefined8 *)(param_1 + 0x1c28));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x920),0);
    FUN_01d0e500();
    PTR_DAT_02004010[0x814] = *(undefined1 *)(param_1 + 0x119c);
    PTR_DAT_02004010[0x815] = *(undefined1 *)(param_1 + 0x119d);
    PTR_DAT_02004010[0x816] = *(undefined1 *)(param_1 + 0x119e);
    FUN_00417c40(param_1 + 0x12c0,PTR_DAT_02004010,&DAT_01d0d0b8);
    (**(code **)(**(longlong **)(param_1 + 0x930) + 0x278))(*(longlong **)(param_1 + 0x930));
  }
  FUN_00414480(&local_38);
  FUN_00414480(local_20);
  return;
}

