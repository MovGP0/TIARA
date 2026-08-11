/* Ghidra address: 01a2ce30 */
/* Ghidra symbol: FUN_01a2ce30 */


void FUN_01a2ce30(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_50 = 0;
  local_48 = 0;
  local_38 = 0;
  local_40 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  plVar1 = *(longlong **)(param_1 + 0x6f8);
  cVar2 = FUN_01b256f0(L"InitialDir",L"ImportPicExt",local_20);
  if (cVar2 != '\0') {
    FUN_00724420(plVar1,local_20[0]);
  }
  uVar3 = FUN_0147d480(L"FilterIndex",L"ImportPicExt",1);
  *(undefined4 *)(plVar1 + 0x1d) = uVar3;
  FUN_00414ad0(plVar1 + 0x1c,L"PNG file (png)|*.png|JPEG file (jpg)|*.jpg");
  FUN_00414ad0(plVar1 + 0x20,&DAT_01a2d11c);
  cVar2 = (**(code **)(*plVar1 + 0xa8))(plVar1);
  if (cVar2 != '\0') {
    FUN_00724270(plVar1,local_30);
    FUN_00414ad0(param_1 + 0x700,local_30[0]);
    FUN_00724270(plVar1,&local_40);
    FUN_00441920(&local_38,local_40);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6e0),local_38);
    FUN_00724350(plVar1,&local_48);
    FUN_01b258f0(L"InitialDir",L"ImportPicExt",local_48);
    uVar3 = FUN_00724300(plVar1);
    FUN_0147d630(L"FilterIndex",L"ImportPicExt",uVar3);
    FUN_00724270(plVar1,&local_50);
    FUN_01b258f0(L"PicFileName",L"ImportPicExt",local_50);
  }
  FUN_00414480(&local_50);
  FUN_00414480(&local_48);
  FUN_00414480(&local_40);
  FUN_00414480(&local_38);
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return;
}

