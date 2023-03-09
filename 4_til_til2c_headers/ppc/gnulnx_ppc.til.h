#define GHIDRA
#ifndef INCLUDE_GUARD_gnulnx_ppc_til
#define INCLUDE_GUARD_gnulnx_ppc_til
#include "../../../../IDAPlugins/idatil2c/common.h"



struct __user_cap_header_struct;
struct __user_cap_data_struct;
struct __old_kernel_stat;
struct old_linux_dirent;
struct robust_list_head;
struct mmap_arg_struct;
struct perf_event_attr;
struct compat_timeval;
struct linux_dirent64;
struct oldold_utsname;
struct sel_arg_struct;
struct kexec_segment;
struct getcpu_cache;
struct linux_dirent;
struct compat_stat;
struct file_handle;
struct new_utsname;
struct old_utsname;
struct user_msghdr;
struct nfsctl_arg;
struct sched_attr;
struct list_head;
struct semaphore;
union bpf_attr;
struct io_event;
struct rlimit64;
struct statfs64;
struct mmsghdr;
struct msgbuf;
struct stat64;
struct iattr;
struct inode;
struct iocb;

struct __user_cap_header_struct {__u32 version;int pid;};
struct __user_cap_data_struct {__u32 effective;__u32 permitted;__u32 inheritable;};
struct __old_kernel_stat;
typedef struct __user_cap_header_struct *cap_user_header_t;
typedef unsigned int __kernel_ulong_t;
struct old_linux_dirent;
struct robust_list_head;
typedef struct __user_cap_data_struct *cap_user_data_t;
struct mmap_arg_struct;
struct perf_event_attr;
struct compat_timeval;
struct linux_dirent64;
struct oldold_utsname;
struct sel_arg_struct;
struct kexec_segment;
struct getcpu_cache;
typedef int32_t key_serial_t;
struct linux_dirent;
typedef unsigned int old_sigset_t;
struct compat_stat;
struct file_handle;
struct new_utsname;
struct old_utsname;
struct user_msghdr;
enum MACRO___NR {__NR_restart_syscall = 0,__NR_exit = 1,__NR_fork = 2,__NR_read = 3,__NR_write = 4,__NR_open = 5,__NR_close = 6,__NR_waitpid = 7,__NR_creat = 8,__NR_link = 9,__NR_unlink = 10,__NR_execve = 11,__NR_chdir = 12,__NR_time = 13,__NR_mknod = 14,__NR_chmod = 15,__NR_lchown = 16,__NR_break = 17,__NR_oldstat = 18,__NR_lseek = 19,__NR_getpid = 20,__NR_mount = 21,__NR_umount = 22,__NR_setuid = 23,__NR_getuid = 24,__NR_stime = 25,__NR_ptrace = 26,__NR_alarm = 27,__NR_oldfstat = 28,__NR_pause = 29,__NR_utime = 30,__NR_stty = 31,__NR_gtty = 32,__NR_access = 33,__NR_nice = 34,__NR_ftime = 35,__NR_sync = 36,__NR_kill = 37,__NR_rename = 38,__NR_mkdir = 39,__NR_rmdir = 40,__NR_dup = 41,__NR_pipe = 42,__NR_times = 43,__NR_prof = 44,__NR_brk = 45,__NR_setgid = 46,__NR_getgid = 47,__NR_signal = 48,__NR_geteuid = 49,__NR_getegid = 50,__NR_acct = 51,__NR_umount2 = 52,__NR_lock = 53,__NR_ioctl = 54,__NR_fcntl = 55,__NR_mpx = 56,__NR_setpgid = 57,__NR_ulimit = 58,__NR_oldolduname = 59,__NR_umask = 60,__NR_chroot = 61,__NR_ustat = 62,__NR_dup2 = 63,__NR_getppid = 64,__NR_getpgrp = 65,__NR_setsid = 66,__NR_sigaction = 67,__NR_sgetmask = 68,__NR_ssetmask = 69,__NR_setreuid = 70,__NR_setregid = 71,__NR_sigsuspend = 72,__NR_sigpending = 73,__NR_sethostname = 74,__NR_setrlimit = 75,__NR_getrlimit = 76,__NR_getrusage = 77,__NR_gettimeofday = 78,__NR_settimeofday = 79,__NR_getgroups = 80,__NR_setgroups = 81,__NR_select = 82,__NR_symlink = 83,__NR_oldlstat = 84,__NR_readlink = 85,__NR_uselib = 86,__NR_swapon = 87,__NR_reboot = 88,__NR_readdir = 89,__NR_mmap = 90,__NR_munmap = 91,__NR_truncate = 92,__NR_ftruncate = 93,__NR_fchmod = 94,__NR_fchown = 95,__NR_getpriority = 96,__NR_setpriority = 97,__NR_profil = 98,__NR_statfs = 99,__NR_fstatfs = 100,__NR_ioperm = 101,__NR_socketcall = 102,__NR_syslog = 103,__NR_setitimer = 104,__NR_getitimer = 105,__NR_stat = 106,__NR_lstat = 107,__NR_fstat = 108,__NR_olduname = 109,__NR_iopl = 110,__NR_vhangup = 111,__NR_idle = 112,__NR_vm86 = 113,__NR_wait4 = 114,__NR_swapoff = 115,__NR_sysinfo = 116,__NR_ipc = 117,__NR_fsync = 118,__NR_sigreturn = 119,__NR_clone = 120,__NR_setdomainname = 121,__NR_uname = 122,__NR_modify_ldt = 123,__NR_adjtimex = 124,__NR_mprotect = 125,__NR_sigprocmask = 126,__NR_create_module = 127,__NR_init_module = 128,__NR_delete_module = 129,__NR_get_kernel_syms = 130,__NR_quotactl = 131,__NR_getpgid = 132,__NR_fchdir = 133,__NR_bdflush = 134,__NR_sysfs = 135,__NR_personality = 136,__NR_afs_syscall = 137,__NR_setfsuid = 138,__NR_setfsgid = 139,__NR__llseek = 140,__NR_getdents = 141,__NR__newselect = 142,__NR_flock = 143,__NR_msync = 144,__NR_readv = 145,__NR_writev = 146,__NR_getsid = 147,__NR_fdatasync = 148,__NR__sysctl = 149,__NR_mlock = 150,__NR_munlock = 151,__NR_mlockall = 152,__NR_munlockall = 153,__NR_sched_setparam = 154,__NR_sched_getparam = 155,__NR_sched_setscheduler = 156,__NR_sched_getscheduler = 157,__NR_sched_yield = 158,__NR_sched_get_priority_max = 159,__NR_sched_get_priority_min = 160,__NR_sched_rr_get_interval = 161,__NR_nanosleep = 162,__NR_mremap = 163,__NR_setresuid32 = 164,__NR_setresuid = 164,__NR_getresuid32 = 165,__NR_getresuid = 165,__NR_query_module = 166,__NR_poll = 167,__NR_nfsservctl = 168,__NR_setresgid32 = 169,__NR_setresgid = 169,__NR_getresgid32 = 170,__NR_getresgid = 170,__NR_prctl = 171,__NR_rt_sigreturn = 172,__NR_rt_sigaction = 173,__NR_rt_sigprocmask = 174,__NR_rt_sigpending = 175,__NR_rt_sigtimedwait = 176,__NR_rt_sigqueueinfo = 177,__NR_rt_sigsuspend = 178,__NR_pread64 = 179,__NR_pwrite64 = 180,__NR_chown = 181,__NR_getcwd = 182,__NR_capget = 183,__NR_capset = 184,__NR_sigaltstack = 185,__NR_sendfile = 186,__NR_getpmsg = 187,__NR_putpmsg = 188,__NR_vfork = 189,__NR_ugetrlimit = 190,__NR_readahead = 191,__NR_mmap2 = 192,__NR_truncate64 = 193,__NR_ftruncate64 = 194,__NR_stat64 = 195,__NR_lstat64 = 196,__NR_fstat64 = 197,__NR_pciconfig_read = 198,__NR_pciconfig_write = 199,__NR_pciconfig_iobase = 200,__NR_multiplexer = 201,__NR_getdents64 = 202,__NR_pivot_root = 203,__NR_fcntl64 = 204,__NR_madvise = 205,__NR_mincore = 206,__NR_gettid = 207,__NR_tkill = 208,__NR_setxattr = 209,__NR_lsetxattr = 210,__NR_fsetxattr = 211,__NR_getxattr = 212,__NR_lgetxattr = 213,__NR_fgetxattr = 214,__NR_listxattr = 215,__NR_llistxattr = 216,__NR_flistxattr = 217,__NR_removexattr = 218,__NR_lremovexattr = 219,__NR_fremovexattr = 220,__NR_futex = 221,__NR_sched_setaffinity = 222,__NR_sched_getaffinity = 223,__NR_tuxcall = 225,__NR_sendfile64 = 226,__NR_io_setup = 227,__NR_io_destroy = 228,__NR_io_getevents = 229,__NR_io_submit = 230,__NR_io_cancel = 231,__NR_set_tid_address = 232,__NR_fadvise64 = 233,__NR_exit_group = 234,__NR_lookup_dcookie = 235,__NR_epoll_create = 236,__NR_epoll_ctl = 237,__NR_epoll_wait = 238,__NR_remap_file_pages = 239,__NR_timer_create = 240,__NR_timer_settime = 241,__NR_timer_gettime = 242,__NR_timer_getoverrun = 243,__NR_timer_delete = 244,__NR_clock_settime = 245,__NR_clock_gettime = 246,__NR_clock_getres = 247,__NR_clock_nanosleep = 248,__NR_swapcontext = 249,__NR_tgkill = 250,__NR_utimes = 251,__NR_statfs64 = 252,__NR_fstatfs64 = 253,__NR_fadvise64_64 = 254,__NR_rtas = 255,__NR_sys_debug_setcontext = 256,__NR_migrate_pages = 258,__NR_mbind = 259,__NR_get_mempolicy = 260,__NR_set_mempolicy = 261,__NR_mq_open = 262,__NR_mq_unlink = 263,__NR_mq_timedsend = 264,__NR_mq_timedreceive = 265,__NR_mq_notify = 266,__NR_mq_getsetattr = 267,__NR_kexec_load = 268,__NR_add_key = 269,__NR_request_key = 270,__NR_keyctl = 271,__NR_waitid = 272,__NR_ioprio_set = 273,__NR_ioprio_get = 274,__NR_inotify_init = 275,__NR_inotify_add_watch = 276,__NR_inotify_rm_watch = 277,__NR_spu_run = 278,__NR_spu_create = 279,__NR_pselect6 = 280,__NR_ppoll = 281,__NR_unshare = 282,__NR_splice = 283,__NR_tee = 284,__NR_vmsplice = 285,__NR_openat = 286,__NR_mkdirat = 287,__NR_mknodat = 288,__NR_fchownat = 289,__NR_futimesat = 290,__NR_fstatat64 = 291,__NR_unlinkat = 292,__NR_renameat = 293,__NR_linkat = 294,__NR_symlinkat = 295,__NR_readlinkat = 296,__NR_fchmodat = 297,__NR_faccessat = 298,__NR_get_robust_list = 299,__NR_set_robust_list = 300,__NR_move_pages = 301,__NR_getcpu = 302,__NR_epoll_pwait = 303,__NR_utimensat = 304,__NR_signalfd = 305,__NR_timerfd = 306,__NR_timerfd_create = 306,__NR_eventfd = 307,__NR_sync_file_range2 = 308,__NR_fallocate = 309,__NR_subpage_prot = 310,__NR_timerfd_settime = 311,__NR_timerfd_gettime = 312,__NR_signalfd4 = 313,__NR_eventfd2 = 314,__NR_epoll_create1 = 315,__NR_dup3 = 316,__NR_pipe2 = 317,__NR_inotify_init1 = 318,__NR_perf_event_open = 319,__NR_preadv = 320,__NR_pwritev = 321,__NR_rt_tgsigqueueinfo = 322,__NR_fanotify_init = 323,__NR_fanotify_mark = 324,__NR_prlimit64 = 325,__NR_socket = 326,__NR_bind = 327,__NR_connect = 328,__NR_listen = 329,__NR_accept = 330,__NR_getsockname = 331,__NR_getpeername = 332,__NR_socketpair = 333,__NR_send = 334,__NR_sendto = 335,__NR_recv = 336,__NR_recvfrom = 337,__NR_shutdown = 338,__NR_setsockopt = 339,__NR_getsockopt = 340,__NR_sendmsg = 341,__NR_recvmsg = 342,__NR_recvmmsg = 343,__NR_accept4 = 344,__NR_name_to_handle_at = 345,__NR_open_by_handle_at = 346,__NR_clock_adjtime = 347,__NR_syncfs = 348,__NR_sendmmsg = 349,__NR_setns = 350,__NR_process_vm_readv = 351,__NR_process_vm_writev = 352,__NR_finit_module = 353,__NR_kcmp = 354,__NR_sched_setattr = 355,__NR_sched_getattr = 356,__NR_renameat2 = 357,__NR_seccomp = 358,__NR_getrandom = 359,__NR_memfd_create = 360,__NR_bpf = 361,__NR_execveat = 362,__NR_switch_endian = 363,__NR_userfaultfd = 364,__NR_membarrier = 365,__NR_mlock2 = 378,__NR_copy_file_range = 379,__NR_preadv2 = 380,__NR_pwritev2 = 381,};
struct nfsctl_arg;
struct sched_attr;
enum MACRO_SYS {SYS_restart_syscall = 0,SYS_exit = 1,SYS_fork = 2,SYS_read = 3,SYS_write = 4,SYS_open = 5,SYS_close = 6,SYS_waitpid = 7,SYS_creat = 8,SYS_link = 9,SYS_unlink = 10,SYS_execve = 11,SYS_chdir = 12,SYS_time = 13,SYS_mknod = 14,SYS_chmod = 15,SYS_lchown = 16,SYS_break = 17,SYS_oldstat = 18,SYS_lseek = 19,SYS_getpid = 20,SYS_mount = 21,SYS_umount = 22,SYS_setuid = 23,SYS_getuid = 24,SYS_stime = 25,SYS_ptrace = 26,SYS_alarm = 27,SYS_oldfstat = 28,SYS_pause = 29,SYS_utime = 30,SYS_stty = 31,SYS_gtty = 32,SYS_access = 33,SYS_nice = 34,SYS_ftime = 35,SYS_sync = 36,SYS_kill = 37,SYS_rename = 38,SYS_mkdir = 39,SYS_rmdir = 40,SYS_dup = 41,SYS_pipe = 42,SYS_times = 43,SYS_prof = 44,SYS_brk = 45,SYS_setgid = 46,SYS_getgid = 47,SYS_signal = 48,SYS_geteuid = 49,SYS_getegid = 50,SYS_acct = 51,SYS_umount2 = 52,SYS_lock = 53,SYS_ioctl = 54,SYS_fcntl = 55,SYS_mpx = 56,SYS_setpgid = 57,SYS_ulimit = 58,SYS_oldolduname = 59,SYS_umask = 60,SYS_chroot = 61,SYS_ustat = 62,SYS_dup2 = 63,SYS_getppid = 64,SYS_getpgrp = 65,SYS_setsid = 66,SYS_sigaction = 67,SYS_sgetmask = 68,SYS_ssetmask = 69,SYS_setreuid = 70,SYS_setregid = 71,SYS_sigsuspend = 72,SYS_sigpending = 73,SYS_sethostname = 74,SYS_setrlimit = 75,SYS_getrlimit = 76,SYS_getrusage = 77,SYS_gettimeofday = 78,SYS_settimeofday = 79,SYS_getgroups = 80,SYS_setgroups = 81,SYS_select = 82,SYS_symlink = 83,SYS_oldlstat = 84,SYS_readlink = 85,SYS_uselib = 86,SYS_swapon = 87,SYS_reboot = 88,SYS_readdir = 89,SYS_mmap = 90,SYS_munmap = 91,SYS_truncate = 92,SYS_ftruncate = 93,SYS_fchmod = 94,SYS_fchown = 95,SYS_getpriority = 96,SYS_setpriority = 97,SYS_profil = 98,SYS_statfs = 99,SYS_fstatfs = 100,SYS_ioperm = 101,SYS_socketcall = 102,SYS_syslog = 103,SYS_setitimer = 104,SYS_getitimer = 105,SYS_stat = 106,SYS_lstat = 107,SYS_fstat = 108,SYS_olduname = 109,SYS_iopl = 110,SYS_vhangup = 111,SYS_idle = 112,SYS_vm86 = 113,SYS_wait4 = 114,SYS_swapoff = 115,SYS_sysinfo = 116,SYS_ipc = 117,SYS_fsync = 118,SYS_sigreturn = 119,SYS_clone = 120,SYS_setdomainname = 121,SYS_uname = 122,SYS_modify_ldt = 123,SYS_adjtimex = 124,SYS_mprotect = 125,SYS_sigprocmask = 126,SYS_create_module = 127,SYS_init_module = 128,SYS_delete_module = 129,SYS_get_kernel_syms = 130,SYS_quotactl = 131,SYS_getpgid = 132,SYS_fchdir = 133,SYS_bdflush = 134,SYS_sysfs = 135,SYS_personality = 136,SYS_afs_syscall = 137,SYS_setfsuid = 138,SYS_setfsgid = 139,SYS__llseek = 140,SYS_getdents = 141,SYS__newselect = 142,SYS_flock = 143,SYS_msync = 144,SYS_readv = 145,SYS_writev = 146,SYS_getsid = 147,SYS_fdatasync = 148,SYS__sysctl = 149,SYS_mlock = 150,SYS_munlock = 151,SYS_mlockall = 152,SYS_munlockall = 153,SYS_sched_setparam = 154,SYS_sched_getparam = 155,SYS_sched_setscheduler = 156,SYS_sched_getscheduler = 157,SYS_sched_yield = 158,SYS_sched_get_priority_max = 159,SYS_sched_get_priority_min = 160,SYS_sched_rr_get_interval = 161,SYS_nanosleep = 162,SYS_mremap = 163,SYS_setresuid32 = 164,SYS_setresuid = 164,SYS_getresuid32 = 165,SYS_getresuid = 165,SYS_query_module = 166,SYS_poll = 167,SYS_nfsservctl = 168,SYS_setresgid32 = 169,SYS_setresgid = 169,SYS_getresgid32 = 170,SYS_getresgid = 170,SYS_prctl = 171,SYS_rt_sigreturn = 172,SYS_rt_sigaction = 173,SYS_rt_sigprocmask = 174,SYS_rt_sigpending = 175,SYS_rt_sigtimedwait = 176,SYS_rt_sigqueueinfo = 177,SYS_rt_sigsuspend = 178,SYS_pread64 = 179,SYS_pwrite64 = 180,SYS_chown = 181,SYS_getcwd = 182,SYS_capget = 183,SYS_capset = 184,SYS_sigaltstack = 185,SYS_sendfile = 186,SYS_getpmsg = 187,SYS_putpmsg = 188,SYS_vfork = 189,SYS_ugetrlimit = 190,SYS_readahead = 191,SYS_mmap2 = 192,SYS_truncate64 = 193,SYS_ftruncate64 = 194,SYS_stat64 = 195,SYS_lstat64 = 196,SYS_fstat64 = 197,SYS_pciconfig_read = 198,SYS_pciconfig_write = 199,SYS_pciconfig_iobase = 200,SYS_multiplexer = 201,SYS_getdents64 = 202,SYS_pivot_root = 203,SYS_fcntl64 = 204,SYS_madvise = 205,SYS_mincore = 206,SYS_gettid = 207,SYS_tkill = 208,SYS_setxattr = 209,SYS_lsetxattr = 210,SYS_fsetxattr = 211,SYS_getxattr = 212,SYS_lgetxattr = 213,SYS_fgetxattr = 214,SYS_listxattr = 215,SYS_llistxattr = 216,SYS_flistxattr = 217,SYS_removexattr = 218,SYS_lremovexattr = 219,SYS_fremovexattr = 220,SYS_futex = 221,SYS_sched_setaffinity = 222,SYS_sched_getaffinity = 223,SYS_tuxcall = 225,SYS_sendfile64 = 226,SYS_io_setup = 227,SYS_io_destroy = 228,SYS_io_getevents = 229,SYS_io_submit = 230,SYS_io_cancel = 231,SYS_set_tid_address = 232,SYS_fadvise64 = 233,SYS_exit_group = 234,SYS_lookup_dcookie = 235,SYS_epoll_create = 236,SYS_epoll_ctl = 237,SYS_epoll_wait = 238,SYS_remap_file_pages = 239,SYS_timer_create = 240,SYS_timer_settime = 241,SYS_timer_gettime = 242,SYS_timer_getoverrun = 243,SYS_timer_delete = 244,SYS_clock_settime = 245,SYS_clock_gettime = 246,SYS_clock_getres = 247,SYS_clock_nanosleep = 248,SYS_swapcontext = 249,SYS_tgkill = 250,SYS_utimes = 251,SYS_statfs64 = 252,SYS_fstatfs64 = 253,SYS_fadvise64_64 = 254,SYS_rtas = 255,SYS_sys_debug_setcontext = 256,SYS_migrate_pages = 258,SYS_mbind = 259,SYS_get_mempolicy = 260,SYS_set_mempolicy = 261,SYS_mq_open = 262,SYS_mq_unlink = 263,SYS_mq_timedsend = 264,SYS_mq_timedreceive = 265,SYS_mq_notify = 266,SYS_mq_getsetattr = 267,SYS_kexec_load = 268,SYS_add_key = 269,SYS_request_key = 270,SYS_keyctl = 271,SYS_waitid = 272,SYS_ioprio_set = 273,SYS_ioprio_get = 274,SYS_inotify_init = 275,SYS_inotify_add_watch = 276,SYS_inotify_rm_watch = 277,SYS_spu_run = 278,SYS_spu_create = 279,SYS_pselect6 = 280,SYS_ppoll = 281,SYS_unshare = 282,SYS_splice = 283,SYS_tee = 284,SYS_vmsplice = 285,SYS_openat = 286,SYS_mkdirat = 287,SYS_mknodat = 288,SYS_fchownat = 289,SYS_futimesat = 290,SYS_fstatat64 = 291,SYS_unlinkat = 292,SYS_renameat = 293,SYS_linkat = 294,SYS_symlinkat = 295,SYS_readlinkat = 296,SYS_fchmodat = 297,SYS_faccessat = 298,SYS_get_robust_list = 299,SYS_set_robust_list = 300,SYS_move_pages = 301,SYS_getcpu = 302,SYS_epoll_pwait = 303,SYS_utimensat = 304,SYS_signalfd = 305,SYS_timerfd = 306,SYS_timerfd_create = 306,SYS_eventfd = 307,SYS_sync_file_range2 = 308,SYS_fallocate = 309,SYS_subpage_prot = 310,SYS_timerfd_settime = 311,SYS_timerfd_gettime = 312,SYS_signalfd4 = 313,SYS_eventfd2 = 314,SYS_epoll_create1 = 315,SYS_dup3 = 316,SYS_pipe2 = 317,SYS_inotify_init1 = 318,SYS_perf_event_open = 319,SYS_preadv = 320,SYS_pwritev = 321,SYS_rt_tgsigqueueinfo = 322,SYS_fanotify_init = 323,SYS_fanotify_mark = 324,SYS_prlimit64 = 325,SYS_socket = 326,SYS_bind = 327,SYS_connect = 328,SYS_listen = 329,SYS_accept = 330,SYS_getsockname = 331,SYS_getpeername = 332,SYS_socketpair = 333,SYS_send = 334,SYS_sendto = 335,SYS_recv = 336,SYS_recvfrom = 337,SYS_shutdown = 338,SYS_setsockopt = 339,SYS_getsockopt = 340,SYS_sendmsg = 341,SYS_recvmsg = 342,SYS_recvmmsg = 343,SYS_accept4 = 344,SYS_name_to_handle_at = 345,SYS_open_by_handle_at = 346,SYS_clock_adjtime = 347,SYS_syncfs = 348,SYS_sendmmsg = 349,SYS_setns = 350,SYS_process_vm_readv = 351,SYS_process_vm_writev = 352,SYS_finit_module = 353,SYS_kcmp = 354,SYS_sched_setattr = 355,SYS_sched_getattr = 356,SYS_renameat2 = 357,SYS_seccomp = 358,SYS_getrandom = 359,SYS_memfd_create = 360,SYS_bpf = 361,SYS_execveat = 362,SYS_switch_endian = 363,SYS_userfaultfd = 364,SYS_membarrier = 365,SYS_mlock2 = 378,SYS_copy_file_range = 379,SYS_preadv2 = 380,SYS_pwritev2 = 381,};
struct list_head;
struct semaphore;
union bpf_attr;
struct io_event;
struct rlimit64;
struct statfs64;
struct mmsghdr;
struct msgbuf;
struct stat64;
struct iattr;
struct inode;
typedef __kernel_uid32_t qid_t;
struct iocb;
typedef unsigned int u32;
typedef unsigned __int64 u64;
typedef __kernel_ulong_t aio_context_t;



#endif
