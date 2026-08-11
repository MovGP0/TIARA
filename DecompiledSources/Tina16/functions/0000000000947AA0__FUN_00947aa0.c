/* Ghidra address: 00947aa0 */
/* Ghidra symbol: FUN_00947aa0 */


undefined8 FUN_00947aa0(undefined8 param_1,longlong param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  uint local_2c;
  int local_24;
  longlong *local_20;
  
  local_40 = auStack_68;
  local_20 = (longlong *)FUN_008f7f70(&PTR_FUN_008f67c0,1);
  local_2c = 0;
  if (param_2 != 0) {
    local_2c = *(uint *)(param_2 + -4) >> 1;
  }
  local_24 = 1;
  uVar2 = local_2c;
  do {
    if (uVar2 == 0) {
      (**(code **)(*local_20 + 0x48))(local_20,param_1);
      FUN_00410f20(local_20);
      return param_1;
    }
    uVar1 = *(ushort *)(param_2 + -2 + (longlong)local_24 * 2);
    if (uVar1 < 0x28) {
      if (uVar1 == 0x27) {
        (**(code **)(*local_20 + 0x28))(local_20,L"&apos;");
      }
      else if (uVar1 == 0x22) {
        (**(code **)(*local_20 + 0x28))(local_20,L"&quot;");
      }
      else {
        if (uVar1 != 0x26) goto LAB_00947bb8;
        (**(code **)(*local_20 + 0x28))(local_20,L"&amp;");
      }
    }
    else if (uVar1 == 0x3c) {
      (**(code **)(*local_20 + 0x28))(local_20,L"&lt;");
    }
    else if (uVar1 == 0x3e) {
      (**(code **)(*local_20 + 0x28))(local_20,L"&gt;");
    }
    else {
LAB_00947bb8:
      (**(code **)(*local_20 + 0x18))(local_20,uVar1);
    }
    local_24 = local_24 + 1;
    uVar2 = uVar2 - 1;
  } while( true );
}

