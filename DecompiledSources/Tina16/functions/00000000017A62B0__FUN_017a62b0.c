/* Ghidra address: 017a62b0 */
/* Ghidra symbol: FUN_017a62b0 */


void FUN_017a62b0(longlong param_1,undefined8 param_2,undefined1 *param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 local_70;
  undefined1 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined8 local_40;
  longlong local_38;
  int local_30;
  int local_2c;
  
  local_40 = 0;
  if (*param_4 == *(longlong *)(param_1 + 0x6f0)) {
    lVar1 = FUN_006e21e0(*(longlong *)(param_1 + 0x6f0),(int)param_4[6],
                         *(undefined4 *)((longlong)param_4 + 0x34));
    if ((lVar1 == 0) || (*(int *)(lVar1 + 0x18) != 0x66)) {
      *param_3 = 0;
    }
    else {
      local_70 = *(undefined8 *)(lVar1 + 0x10);
      local_68 = 0x11;
      local_60 = *(undefined4 *)(*(longlong *)(param_1 + 0x780) + 0x94);
      local_58 = 0;
      local_50 = *(undefined4 *)(*(longlong *)(param_1 + 0x780) + 0x90);
      local_48 = 0;
      FUN_00442f70(&local_40,L"Name : %s\r\nWidth : %d,  Height : %d\r\nRGB 24-bit",&local_70,2);
      FUN_00414ad0(param_4 + 8,local_40);
      FUN_006ddff0(lVar1,&local_38,1);
      local_30 = local_30 + 1;
      local_2c = local_2c + 1;
      param_4[4] = local_38;
      param_4[5] = CONCAT44(local_2c,local_30);
    }
  }
  FUN_00414480(&local_40);
  return;
}

