/* Ghidra address: 00c10e80 */
/* Ghidra symbol: FUN_00c10e80 */


void FUN_00c10e80(longlong *param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  cVar1 = FUN_00c10e70(param_1);
  if (cVar1 != param_2) {
    (**(code **)(*param_1 + 0x180))(param_1);
    cVar1 = FUN_00bfaf10(param_1);
    uVar2 = FUN_00c11080(param_1,*(undefined4 *)((longlong)param_1 + 0x534));
    if ((param_2 == '\0') || ((char)param_1[0x93] != '\0')) {
      FUN_0041b800(param_1 + 0xbf);
    }
    else {
      lVar4 = FUN_00be6d80(&DAT_00be6758,1,param_1);
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = lVar4 + 0x48;
      }
      FUN_0041b840(param_1 + 0xbf,lVar4);
      FUN_00bfb1b0(param_1,1);
    }
    uVar2 = FUN_00c11030(param_1,uVar2);
    FUN_00bfcc50(param_1,uVar2);
    FUN_00bfd160(param_1);
    uVar3 = FUN_00c09df0(param_1);
    if ((uVar3 & 0x40000) != 0) {
      local_40 = FUN_00bfaa10(param_1);
      (**(code **)(*param_1 + 0x2a8))(param_1,&local_40);
      local_30 = FUN_00bf2b30(param_1);
      local_38 = FUN_00bf2b90(param_1);
      FUN_00bfa470(param_1,&local_30);
      FUN_00bfa6c0(param_1,&local_38);
    }
    if (cVar1 != '\0') {
      FUN_00c03710(param_1);
    }
  }
  return;
}

