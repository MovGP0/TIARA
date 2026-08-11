/* Ghidra address: 01d03ea0 */
/* Ghidra symbol: FUN_01d03ea0 */


void FUN_01d03ea0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar5;
  undefined8 *puVar4;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_70 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_50 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  FUN_017be9b0(param_1,param_2,param_3,param_4);
  if (((*PTR_DAT_020052b8 != '\0') && (*(char *)(param_1 + 0xaa) == '\0')) &&
     (*(char *)(param_1 + 0x530) == '\0')) {
    FUN_017ff4f0(param_1,&local_18);
    cVar1 = *(char *)(param_1 + 0xd1);
    if (cVar1 == '\0') {
      FUN_00414b50(&local_20,&DAT_01d04250);
    }
    else if (cVar1 == '\x01') {
      FUN_00414b50(&local_20,&DAT_01d0428c);
    }
    else if (cVar1 == '\x02') {
      FUN_00414b50(&local_20,&DAT_01d04278);
    }
    else if (cVar1 == '\x03') {
      FUN_00414b50(&local_20,&DAT_01d04264);
    }
    FUN_0043f750(local_40,*(undefined4 *)(param_1 + 0xc));
    FUN_0043f750(&local_48,*(undefined4 *)(param_1 + 0x10));
    FUN_00416cd0(&local_10,7,L"MovePart(",local_18,&DAT_01d042c0,local_40[0],&DAT_01d042c0,local_48,
                 local_20);
    if (DAT_01ff0d88 == '\0') {
      DAT_01ff0d88 = '\x01';
      puVar4 = &local_28;
      puVar6 = &local_2c;
      FUN_0135ad60(*(undefined8 *)PTR_DAT_02001f10,&local_50,local_18,L"MovePart",puVar4,puVar6,
                   &local_30);
      uVar7 = (undefined4)((ulonglong)puVar6 >> 0x20);
      iVar3 = FUN_00416db0(local_10,local_50);
      uVar5 = (undefined4)((ulonglong)puVar4 >> 0x20);
      if (iVar3 != 0) {
        FUN_00415dd0(&local_58,local_18,0);
        FUN_00415dd0(&local_60,local_28,0);
        FUN_00415dd0(&local_68,local_10,0);
        puVar4 = (undefined8 *)CONCAT44(uVar5,local_2c);
        FUN_0135af50(*(undefined8 *)PTR_DAT_02001f10,local_58,local_60,local_68,puVar4,
                     CONCAT44(uVar7,local_30));
        FUN_00415dd0(&local_70,local_10,0);
        FUN_017fe450(*(undefined8 *)PTR_DAT_02001d08,local_70,0,1);
      }
      uVar2 = FUN_00f832d0(*(undefined8 *)PTR_DAT_02003c70);
      thunk_FUN_03d2fc6e(200,uVar2,FUN_01d03e90,0,(ulonglong)puVar4 & 0xffffffff00000000);
    }
  }
  FUN_00414590(&local_70,4);
  FUN_00414560(&local_50,3);
  FUN_00414560(&local_28,4);
  return;
}

