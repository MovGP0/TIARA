/* Ghidra address: 01bcc640 */
/* Ghidra symbol: FUN_01bcc640 */


void FUN_01bcc640(longlong param_1,int param_2,longlong *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong local_20;
  
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_20 = 0;
  FUN_00ddf770(param_1,param_2,param_3);
  cVar1 = FUN_00781870();
  if (((cVar1 != '\0') && (cVar1 = FUN_01bcaba0(param_1), cVar1 != '\0')) &&
     ((*(byte *)(param_1 + 0x2c8) & 4) != 0)) {
    FUN_00419260(&local_20,&DAT_01bcc5f8,1,(longlong)(int)param_3[2]);
    iVar6 = 0;
    if (local_20 != 0) {
      iVar6 = (int)*(undefined8 *)(local_20 + -8);
    }
    iVar5 = 0;
    if (iVar6 - 1U < 0x80000000) {
      do {
        lVar4 = 0;
        if (local_20 != 0) {
          lVar4 = *(longlong *)(local_20 + -8);
        }
        FUN_00461840(local_20 + ((lVar4 + -1) - (longlong)iVar5) * 0x18,
                     *param_3 + (longlong)iVar5 * 0x18);
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    if (param_2 < 0xfb) {
      if (param_2 == 0xfa) {
        FUN_00468450(&local_40,local_20);
        FUN_01bcc280(param_1,param_1,local_40,local_20 + 0x18,local_20 + 0x30,local_20 + 0x48,
                     local_20 + 0x60,local_20 + 0x78,*(undefined8 *)(local_20 + 0x98));
      }
      else if (param_2 == 0x69) {
        uVar2 = FUN_00462650(local_20);
        uVar3 = FUN_004644a0(local_20 + 0x18);
        FUN_01bcba40(param_1,param_1,uVar2,uVar3);
      }
      else if (param_2 == 0x6c) {
        uVar2 = FUN_00462650(local_20);
        uVar3 = FUN_00462650(local_20 + 0x18);
        FUN_01bcba10(param_1,param_1,uVar2,uVar3);
      }
    }
    else if (param_2 == 0xfc) {
      FUN_00468450(local_30,local_20);
      FUN_01bcba30(param_1,param_1,local_30[0],local_20 + 0x18);
    }
    else if (param_2 == 0x103) {
      FUN_00468450(&local_38,local_20);
      FUN_01bcba20(param_1,param_1,local_38,local_20 + 0x18);
    }
    FUN_00419430(&local_20,&DAT_01bcc5f8);
  }
  FUN_00417840(&local_40,&DAT_00403448,3);
  FUN_00419430(&local_20,&DAT_01bcc5f8);
  return;
}

