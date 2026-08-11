/* Ghidra address: 01284390 */
/* Ghidra symbol: FUN_01284390 */


undefined1 FUN_01284390(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 local_res10 [3];
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined1 local_49;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  local_10 = 0;
  local_res10[0] = param_2;
  local_58 = param_1;
  FUN_0041b910(param_2);
  if (local_58 != 0) {
    FUN_012841e0(auStack_78,local_20,&PTR_DAT_01284584);
    FUN_00416910(local_58 + 0x2d8,local_20[0],0xff);
    FUN_012841e0(auStack_78,&local_28,&PTR_DAT_01284598);
    uVar1 = FUN_0043fed0(local_28,1);
    *(undefined1 *)(local_58 + 0x3d8) = uVar1;
    cVar2 = FUN_017c3740(local_58);
    if (cVar2 == '\0') {
      FUN_012841e0(auStack_78,&local_30,&PTR_DAT_012845ac);
      uVar1 = FUN_0043fc50(local_30,0);
      *(undefined1 *)(local_58 + 0x3f9) = uVar1;
      FUN_012841e0(auStack_78,&local_38,&PTR_DAT_012845c0);
      uVar1 = FUN_0043fed0(local_38,0);
      *(undefined1 *)(local_58 + 0x3dc) = uVar1;
      FUN_012841e0(auStack_78,&local_40,&PTR_DAT_012845d4);
      uVar1 = FUN_0043fc50(local_40,0);
      *(undefined1 *)(local_58 + 0x3da) = uVar1;
      FUN_012841e0(auStack_78,&local_48,&DAT_012845e8);
      cVar2 = FUN_0043fed0(local_48,0);
      if (cVar2 == '\0') {
        *(undefined1 *)(local_58 + 0x3f8) = 0;
      }
      else {
        *(undefined1 *)(local_58 + 0x3f8) = 1;
      }
    }
  }
  FUN_00414560(&local_48,6);
  FUN_00414480(&local_10);
  FUN_0041b800(local_res10);
  return local_49;
}

