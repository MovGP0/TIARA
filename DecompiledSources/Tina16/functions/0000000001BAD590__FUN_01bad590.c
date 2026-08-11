/* Ghidra address: 01bad590 */
/* Ghidra symbol: FUN_01bad590 */


void FUN_01bad590(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 local_320 [2];
  undefined1 local_310 [768];
  
  local_320[0] = 0;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0xa8))(*(longlong **)(param_1 + 0x6f8));
  if (cVar1 != '\0') {
    lVar2 = FUN_007fc180(&PTR_FUN_00c53a28,1,*(undefined8 *)PTR_DAT_02004030);
    FUN_0064de00(lVar2,L"Searching...");
    FUN_00c54370(lVar2,L"Searching in the library...");
    *(undefined1 *)(lVar2 + 0x6c1) = 0;
    FUN_008059a0(lVar2);
    FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    FUN_00724270(*(undefined8 *)(param_1 + 0x6f8),local_320);
    FUN_0040cf10(local_310,local_320[0],0);
    FUN_00409900();
    FUN_0040ca00(local_310);
    FUN_00409900();
    FUN_017300a0(local_310);
    FUN_01719380(*(undefined8 *)(param_1 + 0x730),local_310);
    FUN_0040d150(local_310);
    FUN_00409900();
    FUN_00410f20(lVar2);
  }
  FUN_00414480(local_320);
  return;
}

