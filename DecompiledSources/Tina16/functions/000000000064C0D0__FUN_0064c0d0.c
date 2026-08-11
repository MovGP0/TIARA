/* Ghidra address: 0064c0d0 */
/* Ghidra symbol: FUN_0064c0d0 */


ulonglong FUN_0064c0d0(longlong *param_1,char param_2)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 local_30;
  
  uVar6 = 0;
  if (*(char *)((longlong)param_1 + 0xa9) != '\0') {
    pcVar2 = (code *)FUN_00411550(param_1,0xffd7);
    lVar3 = (*pcVar2)(param_1);
    if (lVar3 != 0) {
      uVar4 = (**(code **)(*param_1 + 0xe8))(param_1,&local_30);
      uVar5 = thunk_FUN_0418f5de(uVar4,lVar3,-(uint)(param_2 == '\0'));
      iVar1 = thunk_FUN_03a5de49(uVar4);
      if (iVar1 != 0) {
        (**(code **)(*param_1 + 0x180))(param_1);
      }
      thunk_FUN_0418f5de(uVar4,uVar5,0xffffffff);
      thunk_FUN_041a9b5c(local_30,uVar4);
      uVar6 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
    }
  }
  return uVar6 & 0xffffffff;
}

