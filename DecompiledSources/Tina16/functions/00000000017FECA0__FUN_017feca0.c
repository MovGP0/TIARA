/* Ghidra address: 017feca0 */
/* Ghidra symbol: FUN_017feca0 */


ulonglong FUN_017feca0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  ulonglong unaff_R13;
  undefined7 uVar2;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  
  (**(code **)(*param_1 + 0x1f0))(param_1,param_3,&local_4c,&local_50);
  (**(code **)(*param_1 + 0x50))(param_1,param_2,&local_48);
  cVar1 = (**(code **)(*param_1 + 0x1e0))(param_1,param_3);
  uVar2 = (undefined7)(unaff_R13 >> 8);
  if (cVar1 == '\0') {
    if (local_4c < (local_40 + local_48) / 2) {
      unaff_R13 = CONCAT71(uVar2,2);
    }
    else {
      unaff_R13 = 0;
    }
  }
  else if (cVar1 == '\x01') {
    if (local_50 < (local_3c + local_44) / 2) {
      unaff_R13 = CONCAT71(uVar2,1);
    }
    else {
      unaff_R13 = CONCAT71(uVar2,3);
    }
  }
  return unaff_R13 & 0xffffffff;
}

