/* Ghidra address: 0064f700 */
/* Ghidra symbol: FUN_0064f700 */


undefined4 FUN_0064f700(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_2;
  uStack_30 = param_2[1];
  lVar5 = *(longlong *)(param_1 + 0x108);
  if (lVar5 != 0) {
    pcVar4 = (code *)FUN_00411550(lVar5,0xffba);
    cVar1 = (*pcVar4)(lVar5,0,param_1);
    if (cVar1 == '\0') {
      uVar6 = 0;
      goto LAB_0064f749;
    }
  }
  uVar6 = (undefined4)CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
LAB_0064f749:
  if ((char)uVar6 != '\0') {
    lVar5 = FUN_006517e0(param_1,&local_38);
    if (lVar5 == 0) {
      pcVar4 = (code *)FUN_00411550(param_1,0xffca);
      (*pcVar4)(param_1,0,&local_38);
    }
    else {
      uVar2 = FUN_0064d0b0(lVar5);
      uVar3 = FUN_0064d120(lVar5);
      FUN_004238d0(local_48,0,0,uVar2,uVar3);
      pcVar4 = (code *)FUN_00411550(param_1,0xffca);
      (*pcVar4)(param_1,lVar5,local_48);
    }
  }
  return uVar6;
}

