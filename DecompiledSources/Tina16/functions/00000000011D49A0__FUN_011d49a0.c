/* Ghidra address: 011d49a0 */
/* Ghidra symbol: FUN_011d49a0 */


void FUN_011d49a0(longlong param_1)

{
  longlong *plVar1;
  
  if (*(int *)(param_1 + 0x38) == 2) {
    if (*(int *)(param_1 + 0x40) == 1) {
      FUN_00414480(&DAT_01f2aaf8);
    }
    if (*(int *)(param_1 + 0x40) == 2) {
      FUN_00414ad0(&DAT_01f2aaf8,
                   L"WIRE(216,120,256,120,256,136,280,136)\r\nWIRE(216,168,256,168,256,152,280,152)"
                  );
    }
    if (*(int *)(param_1 + 0x40) == 3) {
      FUN_00414ad0(&DAT_01f2aaf8,
                   L"WIRE(216,120,256,120,256,160,280,160)\r\nWIRE(216,168,280,168)\r\nWIRE(216,216,256,216,256,176,280,176)"
                  );
    }
    if (*(int *)(param_1 + 0x40) == 4) {
      FUN_00414ad0(&DAT_01f2aaf8,
                   L"WIRE(216,120,256,120,256,176,280,176)\r\nWIRE(216,168,240,168,240,184,280,184)\r\nWIRE(216,216,240,216,240,200,280,200)\r\nWIRE(216,264,256,264,256,208,280,208)"
                  );
    }
    if (DAT_01f2aaf8 != 0) {
      plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x6b8) + 0x4d8);
      (**(code **)(*plVar1 + 0x78))(plVar1,DAT_01f2aaf8);
    }
  }
  return;
}

