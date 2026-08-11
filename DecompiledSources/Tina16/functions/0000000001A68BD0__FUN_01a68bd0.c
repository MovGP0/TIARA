/* Ghidra address: 01a68bd0 */
/* Ghidra symbol: FUN_01a68bd0 */


undefined1 FUN_01a68bd0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 auStack_e8 [32];
  wchar_t *local_c8;
  undefined8 local_b8;
  undefined1 *local_b0;
  longlong *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_21;
  
  local_b0 = auStack_e8;
  local_b8 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_21 = 1;
  FUN_013b6140(*(undefined8 *)(param_1 + 0x770));
  local_c8 = L"curve_desc.txt";
  FUN_00416cd0(&local_40,3,
               *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x770) + 0x58) + 0x108),
               &DAT_01a68e98);
  local_c8 = L"errors.txt";
  FUN_00416cd0(&local_88,3,
               *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x770) + 0x58) + 0x108),
               &DAT_01a68e98);
  cVar1 = FUN_00440a20(local_88,1);
  if (cVar1 != '\0') {
    local_90 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    (**(code **)(*local_90 + 0xd8))(local_90,local_88);
    (**(code **)(*local_90 + 0x18))(local_90,&local_b8,0);
    FUN_00414ad0(param_2,local_b8);
    FUN_00410f20(local_90);
    local_21 = 0;
    FUN_0043e1a0(&local_80,*param_2);
    cVar1 = FUN_01b25050(L"padlen",local_80);
    if (cVar1 != '\0') {
      cVar1 = FUN_01b25050(L"input",local_80);
      if (cVar1 != '\0') {
        cVar1 = FUN_01b25050(L"vector",local_80);
        if (cVar1 != '\0') {
          FUN_00414ad0(param_2,L"The input curve contains too few points!");
        }
      }
    }
  }
  FUN_00414480(&local_b8);
  FUN_00414560(&local_88,0xc);
  return local_21;
}

