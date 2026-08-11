/* Ghidra address: 01d6fc10 */
/* Ghidra symbol: FUN_01d6fc10 */


void FUN_01d6fc10(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  short sVar4;
  ushort uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  char cVar8;
  undefined1 *in_stack_ffffffffffffff50;
  byte local_49;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 *local_38;
  char local_2a;
  char local_29;
  
  cVar2 = FUN_016ebdb0(param_1);
  sVar4 = FUN_016ebd90(param_1);
  cVar8 = cVar2;
  if (sVar4 == 0xa3) {
    cVar8 = cVar2 + -1;
  }
  puVar6 = (undefined1 *)FUN_01d6f0e0(0,&PTR_FUN_01d6f0d8,cVar8);
  *(short *)(puVar6 + 0x50) = sVar4;
  puVar6[0x40] = 0;
  *(undefined8 *)(puVar6 + 0x48) = 0x4014000000000000;
  local_38 = puVar6;
  uVar7 = FUN_016ebdc0(param_1);
  *(undefined8 *)(puVar6 + 0x38) = uVar7;
  *puVar6 = 1;
  uVar5 = FUN_016ebd90(param_1);
  if (uVar5 < 0xa6) {
    if (uVar5 != 0xa5) {
      if (uVar5 == 0x8a) {
        in_stack_ffffffffffffff50 = &local_3b;
        uVar7 = FUN_01cfde70(*(undefined8 *)(puVar6 + 0x38),2,1,&local_39,&local_3a,
                             in_stack_ffffffffffffff50);
        *(undefined8 *)(puVar6 + 0x30) = uVar7;
      }
      else if (uVar5 == 0x8b) {
        in_stack_ffffffffffffff50 = &local_3b;
        uVar7 = FUN_01cfde70(*(undefined8 *)(puVar6 + 0x38),1,1,&local_39,&local_3a,
                             in_stack_ffffffffffffff50);
        *(undefined8 *)(puVar6 + 0x30) = uVar7;
      }
      else if (uVar5 == 0xa3) {
        in_stack_ffffffffffffff50 = &local_3b;
        uVar7 = FUN_01cfde70(*(undefined8 *)(puVar6 + 0x38),1,1,&local_39,&local_3a,
                             in_stack_ffffffffffffff50);
        *(undefined8 *)(puVar6 + 0x30) = uVar7;
        cVar3 = FUN_016e9de0(param_1,cVar8 + '\x01');
        if (cVar3 != '\0') {
          puVar6[0x40] = cVar8 + '\x01';
        }
        uVar7 = FUN_016eb0a0(param_1,2);
        *(undefined8 *)(puVar6 + 0x48) = uVar7;
        *puVar6 = 4;
      }
      goto LAB_01d6fea6;
    }
  }
  else {
    if (uVar5 == 0xa8) {
      in_stack_ffffffffffffff50 = &local_3b;
      uVar7 = FUN_01cfde70(*(undefined8 *)(puVar6 + 0x38),1,1,&local_39,&local_3a,
                           in_stack_ffffffffffffff50);
      *(undefined8 *)(puVar6 + 0x30) = uVar7;
      goto LAB_01d6fea6;
    }
    if (uVar5 != 0xad) {
      if (uVar5 == 0xbb9) {
        in_stack_ffffffffffffff50 = &local_3b;
        uVar7 = FUN_01cfde70(*(undefined8 *)(puVar6 + 0x38),2,1,&local_39,&local_3a,
                             in_stack_ffffffffffffff50);
        *(undefined8 *)(puVar6 + 0x30) = uVar7;
      }
      goto LAB_01d6fea6;
    }
  }
  in_stack_ffffffffffffff50 = &local_3b;
  uVar7 = FUN_01cfde70(*(undefined8 *)(puVar6 + 0x38),1,1,&local_39,&local_3a,
                       in_stack_ffffffffffffff50);
  *(undefined8 *)(puVar6 + 0x30) = uVar7;
LAB_01d6fea6:
  local_29 = '\x01';
  local_2a = cVar2 + '\x01';
  local_49 = 1;
  for (cVar3 = cVar8; cVar3 != '\0'; cVar3 = cVar3 + -1) {
    in_stack_ffffffffffffff50 =
         (undefined1 *)((ulonglong)in_stack_ffffffffffffff50 & 0xffffffff00000000);
    FUN_00dd5710(*(longlong *)(puVar6 + 0x18) + -0x228 + (ulonglong)local_49 * 0x228,local_49,
                 puVar6[0x40],&local_29,&local_2a,in_stack_ffffffffffffff50,1,1,0,0,0,0,0,0xc);
    local_49 = local_49 + 1;
  }
  local_49 = 1;
  for (cVar3 = cVar8; cVar3 != '\0'; cVar3 = cVar3 + -1) {
    *(undefined1 *)
     (*(longlong *)(*(longlong *)(puVar6 + 0x18) + -0x228 + (ulonglong)local_49 * 0x228) + 6) =
         *puVar6;
    local_49 = local_49 + 1;
  }
  FUN_016e9e20(param_1,local_29 + -1);
  FUN_016e9cd0(param_1,(local_2a - cVar2) + -1);
  local_49 = 1;
  for (; cVar8 != '\0'; cVar8 = cVar8 + -1) {
    lVar1 = *(longlong *)(*(longlong *)(puVar6 + 0x18) + -0x228 + (ulonglong)local_49 * 0x228);
    (**(code **)(*(longlong *)(lVar1 + 8) + 8))(lVar1,param_1,param_2);
    local_49 = local_49 + 1;
  }
  FUN_016e9f40(param_1,FUN_01d6f9e0);
  FUN_016ea050(param_1,&local_38,8);
  FUN_016e9f50(param_1,FUN_01d6fbf0);
  sVar4 = *(short *)(puVar6 + 0x50);
  if (((sVar4 != 0xa5) && (sVar4 != 0xad)) && (sVar4 != 0xa8)) {
    FUN_016e9fe0(param_1,FUN_01d6f1c0);
  }
  return;
}

