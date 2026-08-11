/* Ghidra address: 006840d0 */
/* Ghidra symbol: FUN_006840d0 */


void FUN_006840d0(longlong *param_1,uint *param_2)

{
  uint uVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  uint local_48;
  int iStack_44;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  
  if (*param_2 == 0x112) {
    (**(code **)(*param_1 + 0x150))(param_1,param_2);
  }
  else {
    if ((((0xff < *param_2) && (*param_2 < 0x10a)) &&
        (plVar3 = (longlong *)FUN_007f9b70(param_1,1), plVar3 != (longlong *)0x0)) &&
       (cVar2 = (**(code **)(*plVar3 + 0x2d8))(plVar3,param_1,param_2), cVar2 != '\0')) {
      return;
    }
    (**(code **)(*param_1 + 0x2b8))(param_1,param_2,param_1[0x9f],param_1[0xa2]);
    uVar1 = *param_2;
    if ((int)uVar1 < 0x202) {
      if (uVar1 != 0x201) {
        if (uVar1 == 0x30) {
          if (*PTR_DAT_02003210 == '\0') {
            return;
          }
          thunk_FUN_041b2403(param_1[0x9f],0xd3,3,0);
          return;
        }
        if (uVar1 != 0x200) {
          return;
        }
        FUN_0064fca0(param_1,0x200,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
        return;
      }
    }
    else if (uVar1 != 0x203) {
      if (uVar1 != 0xb04d) {
        return;
      }
      if ((char)param_1[0x94] == '\0') {
        return;
      }
      thunk_FUN_03e49910(param_1[0x9f],local_40);
      thunk_FUN_0411b3be(0,param_1[0x9f],local_40,2);
      FUN_00648850(param_1[0x9f],local_40);
      *(undefined1 *)(param_1 + 0x94) = 0;
      return;
    }
    cVar2 = FUN_0064c470(param_1);
    if (cVar2 == '\x01') {
      thunk_FUN_03cc0d62(local_30);
      uVar4 = FUN_0064d3a0(param_1,local_30);
      local_48 = (uint)uVar4;
      iStack_44 = (int)((ulonglong)uVar4 >> 0x20);
      thunk_FUN_041b2403(param_1[0x9f],0x202,0,
                         (longlong)(int)(local_48 & 0xffff | iStack_44 << 0x10));
      FUN_0064e9e0(param_1,0,0xffffffff);
    }
  }
  return;
}

