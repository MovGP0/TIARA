/* Ghidra address: 014b78f0 */
/* Ghidra symbol: FUN_014b78f0 */


void FUN_014b78f0(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  lVar1 = *(longlong *)(param_1 + 0xd0);
  uVar2 = thunk_FUN_03f3ed25(*(undefined4 *)(lVar1 + 0x18),
                             *(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98),0x60);
  FUN_0064b380(lVar1,2,uVar2);
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),3,*(undefined4 *)(param_1 + 0x98));
  FUN_0064cf60(param_1,0x43e);
  (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x268))
            (*(longlong **)(param_1 + 0x6d0),*PTR_DAT_02004f10);
  (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x268))
            (*(longlong **)(param_1 + 0x6d8),*PTR_DAT_020032a8 == '\0');
  (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x268))
            (*(longlong **)(param_1 + 0x6e8),*PTR_DAT_02001ab0);
  FUN_00416cd0(local_20,3,*(undefined8 *)PTR_DAT_02005010,&DAT_014b7a64,L"TINA.INI");
  uVar3 = FUN_005da0f0(&PTR_FUN_005d5a90,1,local_20[0]);
  *(undefined8 *)(param_1 + 0x6f0) = uVar3;
  *(undefined1 *)(param_1 + 0x6f9) = 1;
  FUN_00414480(local_20);
  return;
}

