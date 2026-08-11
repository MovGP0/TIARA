/* Ghidra address: 00664700 */
/* Ghidra symbol: FUN_00664700 */


void FUN_00664700(longlong param_1,char param_2,ushort param_3,undefined4 param_4,undefined4 param_5
                 ,undefined1 *param_6)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [52];
  int local_2c [3];
  
  if (param_2 == '\0') {
    if ((param_3 & 0x40) == 0) {
      local_6c = param_5;
      local_70 = param_4;
      lVar3 = FUN_00661cc0(param_1,&local_70,local_2c);
      if (lVar3 != 0) {
        if (local_2c[0] == 0x12) {
          local_74 = param_5;
          local_78 = param_4;
          FUN_00663b20(param_1,lVar3,&local_78);
        }
        else if (local_2c[0] == 2) {
          uVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 0x28));
          iVar2 = thunk_FUN_04166556(local_60,uVar4,0x203,0x203,0);
          if (iVar2 == 0) {
            cVar1 = FUN_004113d0(*(undefined8 *)(lVar3 + 8),&PTR_FUN_00640c18);
            if (cVar1 != '\0') {
              (**(code **)(**(longlong **)(lVar3 + 8) + 600))(*(longlong **)(lVar3 + 8));
            }
          }
          if (*(char *)(*(longlong *)(lVar3 + 8) + 0xff) == '\x01') {
            cVar1 = FUN_0064c470(*(longlong *)(lVar3 + 8));
            if (cVar1 == '\x01') {
              FUN_0064e9e0(*(undefined8 *)(lVar3 + 8),0,0xffffffff);
            }
          }
          *param_6 = 1;
        }
      }
    }
    else {
      local_64 = param_5;
      local_68 = param_4;
      lVar3 = FUN_00661cc0(param_1,&local_68,local_2c);
      if (((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) && (local_2c[0] == 2)) {
        FUN_0064ac70();
        FUN_0064f3f0(*(undefined8 *)(lVar3 + 8),0,0,1);
      }
    }
  }
  return;
}

