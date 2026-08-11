/* Ghidra address: 01743be0 */
/* Ghidra symbol: FUN_01743be0 */


void FUN_01743be0(longlong param_1,int param_2,longlong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  byte *local_38;
  undefined1 local_2a;
  undefined1 local_29 [9];
  
  *(undefined4 *)(param_3 + 0x28) = 0;
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))(*(longlong **)(param_1 + 0x28));
  uVar2 = uVar2 & 0xffff;
  if (uVar2 < 0x19a) {
    if ((uVar2 != 0x2c) && (uVar2 != 0x71)) {
      return;
    }
  }
  else if ((3 < uVar2 - 0x19a) && (1 < uVar2 - 0x19f)) {
    if (1 < uVar2 - 0x460) {
      return;
    }
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2d0))
              (*(longlong **)(param_1 + 0x28),2,&local_38);
    bVar1 = *local_38;
    if (2 < bVar1) {
      if (bVar1 == 3) {
        *(undefined4 *)(param_3 + 0x18) = 0xffff00;
        return;
      }
      if (bVar1 != 4) {
        return;
      }
      *(undefined4 *)(param_3 + 0x18) = 0x51a8ff;
      return;
    }
    if (bVar1 == 2) {
      *(undefined4 *)(param_3 + 0x18) = 0xffff;
      return;
    }
    if (bVar1 != 0) {
      if (bVar1 != 1) {
        return;
      }
      *(undefined4 *)(param_3 + 0x18) = 0xff00;
      return;
    }
    *(undefined4 *)(param_3 + 0x18) = 0xff;
    return;
  }
  uVar3 = FUN_01cfdcb0(*(undefined8 *)(param_1 + 0x28),1,local_29);
  local_38 = (byte *)FUN_01cfdd50(*(undefined8 *)(param_1 + 0x28),uVar3,param_2 * 0x16,&local_2a);
  if (local_38 == (byte *)0x0) {
    *(undefined8 *)(param_3 + 0x20) = 0x4084a00000000000;
  }
  else {
    *(undefined8 *)(param_3 + 0x20) = *(undefined8 *)local_38;
  }
  FUN_01a9dd40(&local_3b,*(undefined8 *)(param_3 + 0x20),0x3fe999999999999a);
  *(uint *)(param_3 + 0x18) = (uint)CONCAT12(local_3b,CONCAT11(local_3a,local_39));
  return;
}

