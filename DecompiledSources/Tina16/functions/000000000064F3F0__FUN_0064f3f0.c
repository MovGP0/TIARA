/* Ghidra address: 0064f3f0 */
/* Ghidra symbol: FUN_0064f3f0 */


char FUN_0064f3f0(longlong param_1,longlong param_2,undefined8 param_3,undefined1 param_4)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_44;
  undefined8 uStack_3c;
  char local_31;
  longlong local_30;
  
  local_60 = auStack_a8;
  if ((param_2 == 0) || (param_2 == 0xffffffff)) {
    lVar1 = *(longlong *)(param_1 + 0x108);
    if ((lVar1 == 0) || ((*(char *)(lVar1 + 0x392) == '\0' || (*(longlong *)(lVar1 + 0x340) == 0))))
    {
      local_44 = *(ulonglong *)(param_1 + 0x90);
      local_60 = auStack_a8;
      if (*(longlong *)(param_1 + 0x78) != 0) {
        local_60 = auStack_a8;
        local_44 = FUN_0064d1f0(*(longlong *)(param_1 + 0x78),&local_44);
      }
    }
    else {
      local_60 = auStack_a8;
      (**(code **)(**(longlong **)(lVar1 + 0x340) + 0x28))
                (*(longlong **)(lVar1 + 0x340),param_1,&local_44);
      uVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 0x108));
      thunk_FUN_0411b3be(uVar4,0,&local_44,2);
    }
    uVar3 = FUN_0064dcf0(param_1);
    local_88 = FUN_0064dcd0(param_1);
    FUN_00423b80(&local_70,local_44 & 0xffffffff,local_44._4_4_,uVar3);
    local_44 = local_70;
    uStack_3c = uStack_68;
    cVar2 = FUN_0064f700(param_1,&local_44);
    return cVar2;
  }
  FUN_0064fd30(param_1);
  lVar1 = *(longlong *)(param_1 + 0x108);
  if (lVar1 != 0) {
    pcVar5 = (code *)FUN_00411550(lVar1,0xffba);
    cVar2 = (*pcVar5)(lVar1,param_2,param_1);
    if (cVar2 == '\0') {
      local_31 = '\0';
      goto LAB_0064f581;
    }
  }
  local_31 = '\x01';
LAB_0064f581:
  if (local_31 != '\0') {
    local_30 = FUN_00649430(&PTR_FUN_00637e70,1,param_1);
    if (*(longlong *)(param_1 + 0x108) == 0) {
      local_50 = 0;
    }
    else {
      local_50 = FUN_0065b870(*(longlong *)(param_1 + 0x108));
    }
    FUN_0064d000(param_1,&local_44);
    if (local_50 != 0) {
      thunk_FUN_0411b3be(local_50,0,&local_44,2);
    }
    *(longlong *)(local_30 + 0x20) = param_2;
    *(undefined1 *)(local_30 + 0x70) = param_4;
    *(undefined8 *)(local_30 + 0x78) = param_3;
    *(ulonglong *)(local_30 + 0x60) = local_44;
    *(undefined8 *)(local_30 + 0x68) = uStack_3c;
    local_58 = local_44;
    uVar4 = FUN_0065b870(param_2);
    thunk_FUN_0411b3be(0,uVar4,&local_58,1);
    if ((0x7fff < (int)local_58) || ((int)local_58 < -0x8000)) {
      local_58 = CONCAT44(local_58._4_4_,(int)(short)(local_58 >> 0x10));
    }
    if ((0x7fff < local_58._4_4_) || (local_58._4_4_ < -0x8000)) {
      local_58 = CONCAT44((int)(short)(local_58 >> 0x30),(int)local_58);
    }
    pcVar5 = (code *)FUN_00411550(param_2,0xffb2);
    (*pcVar5)(param_2,local_30,local_58 & 0xffffffff,local_58._4_4_);
    FUN_00410f20(local_30);
  }
  return local_31;
}

