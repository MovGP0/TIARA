/* Ghidra address: 012769b0 */
/* Ghidra symbol: FUN_012769b0 */


void FUN_012769b0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong *local_20;
  
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_20 = (longlong *)0x0;
  (**(code **)(*(longlong *)*param_2 + 0x68))((longlong *)*param_2);
  (**(code **)(*(longlong *)*param_2 + 0x70))((longlong *)*param_2,local_30);
  FUN_0041b890(&local_20,local_30[0],&DAT_01276b9c);
  while (local_20 != (longlong *)0x0) {
    lVar2 = FUN_010ae440(&DAT_010a8868,1,0,0,0);
    (**(code **)(*local_20 + 0x100))(local_20,&local_38,&PTR_DAT_01276bb8);
    uVar1 = FUN_0043fc50(local_38,0);
    *(undefined4 *)(lVar2 + 8) = uVar1;
    (**(code **)(*local_20 + 0x100))(local_20,&local_40,L"flag");
    uVar1 = FUN_0043fc50(local_40,0);
    *(undefined4 *)(lVar2 + 0x10) = uVar1;
    (**(code **)(*local_20 + 0x100))(local_20,&local_48,L"time");
    uVar3 = FUN_01d0a620(local_48,0);
    *(undefined8 *)(lVar2 + 0x18) = uVar3;
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x40),lVar2);
    (**(code **)(*(longlong *)*param_2 + 0x70))((longlong *)*param_2,&local_50);
    FUN_0041b890(&local_20,local_50);
  }
  FUN_0041b800(&local_50);
  FUN_00414560(&local_48,3);
  FUN_0041b800(local_30);
  FUN_0041b800(&local_20);
  return;
}

