/* Ghidra address: 00de19d0 */
/* Ghidra symbol: FUN_00de19d0 */


undefined4
FUN_00de19d0(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,ushort param_5,
            undefined8 param_6,longlong param_7)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  if (((param_5 & 2) == 0) || (param_7 == 0)) {
    local_4c = 0x80020003;
    goto code_r0x00de1c54;
  }
  local_4c = 0;
  if (param_2 < -0x2c1) {
    if (param_2 == -0x2c2) {
      FUN_00468820(param_7,1);
      goto code_r0x00de1c54;
    }
    if (param_2 < -0x2c6) {
      if (param_2 == -0x2c7) {
        FUN_00468820(param_7,0);
        goto code_r0x00de1c54;
      }
      if (param_2 == -0x2cb) {
        FUN_00468820(param_7,1);
        goto code_r0x00de1c54;
      }
      if (param_2 == -0x2ca) {
        FUN_00468820(param_7,1);
        goto code_r0x00de1c54;
      }
      if (param_2 == -0x2c8) {
        FUN_00468820(param_7,0);
        goto code_r0x00de1c54;
      }
    }
    else {
      if (param_2 == -0x2c6) {
        FUN_00468820(param_7,(*(ushort *)(param_1 + 0x34) & 0x10) != 0);
        goto code_r0x00de1c54;
      }
      if (param_2 == -0x2c5) {
        FUN_00468820(param_7,(*(ushort *)(param_1 + 0x34) & 0x10) == 0);
        goto code_r0x00de1c54;
      }
    }
  }
  else if (param_2 < -0x2be) {
    if (param_2 == -0x2bf) {
      if ((*(longlong *)(param_1 + 0x78) == 0) || (*(char *)(param_1 + 0xab) == '\0')) {
        uVar2 = *(undefined8 *)(param_1 + 0xb8);
      }
      else {
        uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0xb8);
      }
      FUN_00ddc4e0(&local_48,uVar2);
      FUN_00461840(param_7,&local_48);
      goto code_r0x00de1c54;
    }
    if (param_2 == -0x2c1) {
      uVar1 = thunk_FUN_040d222c();
      FUN_00468530(param_7,uVar1,0xfffffffffffffffc);
      goto code_r0x00de1c54;
    }
    if (param_2 == -0x2c0) {
      FUN_00468530(param_7,*(undefined4 *)(*(longlong *)(param_1 + 0xb8) + 0x28),0xfffffffffffffffc)
      ;
      goto code_r0x00de1c54;
    }
  }
  else {
    if (param_2 == -0x2be) {
      FUN_00ddc600(&local_30,*(undefined8 *)(param_1 + 0x10));
      FUN_00461840(param_7,&local_30);
      goto code_r0x00de1c54;
    }
    if (param_2 == -0x2bd) {
      FUN_00468530(param_7,*(undefined4 *)(param_1 + 200),0xfffffffffffffffc);
      goto code_r0x00de1c54;
    }
  }
  local_4c = 0x80020003;
code_r0x00de1c54:
  FUN_00417840(&local_48,&DAT_004013d8,2);
  return local_4c;
}

