/* Ghidra address: 0136a7f0 */
/* Ghidra symbol: FUN_0136a7f0 */


void FUN_0136a7f0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x27a8);
  uVar3 = FUN_0198d430(plVar1);
  puVar6 = &local_30;
  FUN_01a982d0(uVar3,param_2,param_3,&local_2c,puVar6);
  lVar4 = (**(code **)(*plVar1 + 0x58))(plVar1,local_2c,local_30);
  if (lVar4 != 0) {
    cVar2 = FUN_0198a580(lVar4);
    if (cVar2 == '\x04') {
      FUN_019943c0(plVar1,lVar4);
      FUN_01993f30(plVar1,lVar4,1,0);
      *PTR_DAT_020039a8 = 1;
      FUN_013b24b0(lVar4);
      *PTR_DAT_020039a8 = 0;
      uVar3 = FUN_0198d430(plVar1);
      uVar7 = CONCAT71((int7)((ulonglong)puVar6 >> 8),PTR_DAT_02004010[0x814]);
      FUN_017be0e0(lVar4,uVar3,&local_40,PTR_DAT_02004010[0x816],uVar7,*PTR_DAT_020037e8,
                   PTR_DAT_02004010[0x815],*PTR_DAT_02005310);
      uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
      plVar5 = (longlong *)FUN_0198d430(plVar1);
      (**(code **)(*plVar5 + 0x30))(plVar5,local_40,local_3c,local_38,CONCAT44(uVar8,local_34));
      FUN_0199e310(plVar1,0,1,0);
      FUN_0064e770(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xa10));
      FUN_01364ff0(param_1,param_2,param_3);
    }
  }
  return;
}

