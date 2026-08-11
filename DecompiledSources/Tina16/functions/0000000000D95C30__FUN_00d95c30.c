/* Ghidra address: 00d95c30 */
/* Ghidra symbol: FUN_00d95c30 */


undefined8 FUN_00d95c30(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char local_24;
  int local_20;
  
  local_24 = (char)*param_2;
  if (local_24 != '\x1f') {
    return 0;
  }
  local_20 = (int)((ulonglong)*param_2 >> 0x20);
  if (local_20 < 0x5e) {
    if (local_20 != 0x5d) {
      if (local_20 != 0x4d) {
        if (local_20 == 0x4e) goto LAB_00d95cb0;
        if (local_20 != 0x59) {
          if (local_20 != 0x5b) {
            return 0;
          }
          uVar1 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0xb0))
                            (*(longlong **)(param_1 + 0x180),0,3,L"default");
          return uVar1;
        }
      }
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0xb0))
                        (*(longlong **)(param_1 + 0x180),0,0,L"default");
      return uVar1;
    }
  }
  else {
    if (local_20 == 0x5e) {
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0xb0))
                        (*(longlong **)(param_1 + 0x180),0,1,L"default");
      return uVar1;
    }
    if (local_20 == 0x5f) {
LAB_00d95cb0:
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0xb0))
                        (*(longlong **)(param_1 + 0x180),6,1,L"default");
      return uVar1;
    }
    if (local_20 != 0x61) {
      if (local_20 != 99) {
        return 0;
      }
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0xb0))
                        (*(longlong **)(param_1 + 0x180),0,2,L"default");
      return uVar1;
    }
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0xb0))
                    (*(longlong **)(param_1 + 0x180),0,5,L"default");
  return uVar1;
}

