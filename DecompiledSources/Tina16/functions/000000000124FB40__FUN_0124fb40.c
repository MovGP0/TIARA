/* Ghidra address: 0124fb40 */
/* Ghidra symbol: FUN_0124fb40 */


longlong FUN_0124fb40(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong local_res10 [3];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30 [2];
  
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30[0] = (longlong *)0x0;
  local_38 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  lVar2 = FUN_00c3d400(&LAB_00c3a6d0,1);
  (**(code **)(*param_1 + 0xd8))(param_1,&local_40,L"image");
  FUN_0041b890(local_30,local_40,&DAT_0124fdf4);
  if (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x100))(local_30[0],&local_48,L"name");
    FUN_00414ad0(lVar2 + 0x10,local_48);
    lVar3 = FUN_0124dd80(local_30[0],local_res10[0],&local_38);
    *(undefined4 *)(lVar3 + 8) = 0;
    FUN_00414ad0(lVar2 + 0x18,local_38);
    FUN_00c3f030(lVar2,lVar3);
    if (local_res10[0] != 0) {
      iVar4 = 0;
      do {
        FUN_0043f750(&local_60,iVar4 * 0x5a);
        FUN_00416cd0(&local_58,3,L"image3d[@dir=\"",local_60,&LAB_0124fe54);
        (**(code **)(*param_1 + 0xd8))(param_1,&local_50,local_58);
        FUN_0041b890(local_30,local_50,&DAT_0124fdf4);
        if (local_30[0] != (longlong *)0x0) {
          lVar3 = FUN_0124dd80(local_30[0],local_res10[0],&local_38);
          uVar1 = (longlong)(iVar4 * -0x5a + 0x168) % 0x168;
          *(int *)(lVar3 + 8) =
               (int)((longlong)((ulonglong)(uint)((int)uVar1 >> 0x1f) << 0x20 | uVar1 & 0xffffffff)
                    / 0x5a) * 3 + 2;
          FUN_00c3f030(lVar2,lVar3);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != 4);
    }
  }
  FUN_00414560(&local_60,2);
  FUN_0041b800(&local_50);
  FUN_00414480(&local_48);
  FUN_0041b800(&local_40);
  FUN_00414480(&local_38);
  FUN_0041b800(local_30);
  FUN_00414480(local_res10);
  return lVar2;
}

