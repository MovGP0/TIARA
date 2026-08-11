/* Ghidra address: 00b4f030 */
/* Ghidra symbol: FUN_00b4f030 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00b4f030(longlong *param_1,undefined8 *param_2)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [40];
  longlong *local_60;
  ushort *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  uint local_2c;
  
  local_48 = *param_2;
  uStack_40 = param_2[1];
  uStack_38 = param_2[2];
  local_60 = param_1;
  FUN_0046bd60(&local_48);
  local_50 = &local_48;
  local_2c = (uint)(ushort)local_48;
  local_58 = (ushort *)(local_60 + 5);
  uVar1 = *local_58;
  if (local_2c < 0x10) {
    if ((6 < local_2c - 2) && (local_2c != 0xb)) {
LAB_00b4f13a:
      uVar4 = FUN_00b146c0(&PTR_FUN_00b141e0,1,3);
      FUN_004134c0(uVar4);
      goto code_r0x00b4f154;
    }
  }
  else if (((4 < local_2c - 0x10) && (local_2c != 0x100)) && (local_2c != 0x102)) goto LAB_00b4f13a;
  FUN_00b4ef80(auStack_88);
  if (((local_2c == 7) && (uVar1 != 7)) && (iVar3 = FUN_00b4d170(local_60), iVar3 == 0)) {
    (**(code **)(*local_60 + 0x78))(local_60,0xd);
  }
  if ((uVar1 != local_2c) || (cVar2 = FUN_0046f340(local_60 + 5,&local_48), cVar2 != '\0')) {
    FUN_00461840(local_60 + 5,&local_48);
  }
  cVar2 = FUN_0046c3d0(local_60 + 5);
  if (cVar2 == '\0') {
    (*(code *)**(undefined8 **)local_60[2])((undefined8 *)local_60[2],local_60);
  }
code_r0x00b4f154:
  FUN_00460ba0(&local_48);
  return;
}

