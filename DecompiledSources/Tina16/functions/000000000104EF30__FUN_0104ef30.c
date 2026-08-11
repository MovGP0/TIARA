/* Ghidra address: 0104ef30 */
/* Ghidra symbol: FUN_0104ef30 */


void FUN_0104ef30(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_40 [2];
  char local_29;
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined8 local_20;
  
  local_40[0] = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
  local_20 = FUN_0064d3a0(*(undefined8 *)(*(longlong *)(param_1 + 0x928) + 0x4d8),local_40);
  uVar2 = FUN_00f62a60(*(undefined8 *)(param_1 + 0x980));
  lVar3 = FUN_00f74ae0(uVar2,local_20 & 0xffffffff,local_20._4_4_,&local_29,local_24,local_28);
  cVar1 = FUN_01052fe0(param_1);
  if (((cVar1 == '\0') && (lVar3 != 0)) && (local_29 == '\x02')) {
    cVar1 = *(char *)(lVar3 + 0x30);
    if (cVar1 == '\b') {
      FUN_01050c30(param_1,lVar3);
    }
    else if (cVar1 == '\x03') {
      FUN_01050cd0(param_1,lVar3);
    }
    else if (cVar1 == '\x02') {
      FUN_01050f20(param_1,lVar3);
    }
    else if (cVar1 == '\x01') {
      FUN_01050ff0(param_1,lVar3);
    }
    else if (cVar1 == '\x04') {
      FUN_01050d90(param_1,lVar3);
    }
    else if (cVar1 == '\x06') {
      FUN_010510a0(param_1,lVar3);
    }
    else if (cVar1 == '\a') {
      FUN_01050e50(param_1,lVar3);
    }
    else if (cVar1 == '\x05') {
      FUN_01051150(param_1,lVar3);
    }
    else if (cVar1 == '\v') {
      FUN_010511e0(param_1,lVar3);
    }
    else if (cVar1 == '\f') {
      FUN_010512f0(param_1,lVar3);
    }
  }
  else {
    cVar1 = FUN_01052fe0(param_1);
    if (((cVar1 != '\0') && (lVar3 != 0)) && (local_29 == '\x02')) {
      FUN_0072d440(L"The editor is locked",2,4,0);
    }
  }
  return;
}

